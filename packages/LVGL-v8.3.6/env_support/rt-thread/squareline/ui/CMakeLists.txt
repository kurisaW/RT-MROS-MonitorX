SET(SOURCES components/ui_comp_bar1.c
    components/ui_comp_next_figure.c
    components/ui_comp_wifi.c
    components/ui_comp.c
    screens/ui_start_menu.c
    screens/ui_Main_Screen.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_microros_rtt_png.c
    images/ui_img_startup_png.c
    images/ui_img_return_png.c
    images/ui_img_serial_png.c
    images/ui_img_1383021239.c
    images/ui_img_close_png.c
    images/ui_img_tortle_background_png.c
    images/ui_img_turtle_png.c
    images/ui_img_terminal_png.c
    images/ui_img_1650958959.c
    images/ui_img_1915926208.c)

add_library(ui ${SOURCES})
