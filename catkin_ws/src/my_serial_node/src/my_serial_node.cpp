#include "rclcpp/rclcpp.hpp"
#include "turtlesim/msg/pose.hpp"
#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include <cstring> // For memcpy
#include <chrono>

const char *serial_port = "/dev/ttyUSB0";
int serial_fd;

std::chrono::time_point<std::chrono::system_clock> last_msg_time;
float last_x = 0.0;
float last_y = 0.0;

void setupSerial() {
    serial_fd = open(serial_port, O_RDWR | O_NOCTTY | O_NONBLOCK);
    if (serial_fd < 0) {
        perror("Error opening serial port");
        exit(-1);
    }

    struct termios tty;
    tcgetattr(serial_fd, &tty);
    cfsetospeed(&tty, B115200);  // 设置波特率
    cfsetispeed(&tty, B115200);
    tty.c_cflag |= (CLOCAL | CREAD); // 使能串口读写
    tty.c_cflag &= ~PARENB; // 不使用奇偶校验位
    tty.c_cflag &= ~CSTOPB; // 设置停止位为1
    tty.c_cflag &= ~CSIZE; // 清除数据位设置
    tty.c_cflag |= CS8; // 设置数据位为8位
    tcsetattr(serial_fd, TCSANOW, &tty); // 设置完毕后，立即生效
}

void sendMessage(float x, float y) {
    // Format coordinates as a string
    std::string message = " x=" + std::to_string(x) + ",y=" + std::to_string(y);

    // Add newline character to indicate end of message (optional)
    message += '\r';

    // Send the entire message at once
    write(serial_fd, message.c_str(), message.length());
}

class PoseSubscriber : public rclcpp::Node {
public:
    PoseSubscriber() : Node("pose_subscriber") {
        subscription_ = this->create_subscription<turtlesim::msg::Pose>(
            "turtle1/pose", 10, std::bind(&PoseSubscriber::callback, this, std::placeholders::_1));
        last_msg_time = std::chrono::system_clock::now();
    }

private:
    void callback(const turtlesim::msg::Pose::SharedPtr msg) const {
        auto current_time = std::chrono::system_clock::now();
        std::chrono::duration<float> elapsed_seconds = current_time - last_msg_time;
        
        if (msg->x != last_x || msg->y != last_y) {
            if (elapsed_seconds.count() >= 0.5) {
                RCLCPP_INFO(this->get_logger(), "Received pose: x=%f, y=%f", msg->x, msg->y);
                sendMessage(msg->x, msg->y);
                last_x = msg->x;
                last_y = msg->y;
                last_msg_time = current_time;
            } else {
                RCLCPP_WARN(this->get_logger(), "Skipping message due to too frequent updates");
            }
        }
    }

    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    setupSerial();
    auto node = std::make_shared<PoseSubscriber>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    close(serial_fd);
    return 0;
}

