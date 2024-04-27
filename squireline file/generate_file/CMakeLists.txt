SET(SOURCES screens/ui_start_menu.c
    screens/ui_Screen2.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_startup_png.c
    images/ui_img_microros_rtt_png.c
    fonts/ui_font_Font1en.c)

add_library(ui ${SOURCES})
