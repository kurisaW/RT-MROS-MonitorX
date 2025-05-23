// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void console_desc1_anim_Animation( lv_obj_t *TargetObject, int delay);
void pressed_Animation( lv_obj_t *TargetObject, int delay);
void console_desc2_anim_Animation( lv_obj_t *TargetObject, int delay);
void clendar_anim_Animation( lv_obj_t *TargetObject, int delay);
void keyboardanim_Animation( lv_obj_t *TargetObject, int delay);
void FunctrlPanelanim_Animation( lv_obj_t *TargetObject, int delay);
void Turtlesimanim_Animation( lv_obj_t *TargetObject, int delay);
void Informationanim_Animation( lv_obj_t *TargetObject, int delay);
void MesgListanim_Animation( lv_obj_t *TargetObject, int delay);
void MesgTopicHanderanim_Animation( lv_obj_t *TargetObject, int delay);
void MsgConsoleanim_Animation( lv_obj_t *TargetObject, int delay);
void Subscriberanim_Animation( lv_obj_t *TargetObject, int delay);
void Publisheranim_Animation( lv_obj_t *TargetObject, int delay);
void TopicListanim_Animation( lv_obj_t *TargetObject, int delay);
void NodeListanim_Animation( lv_obj_t *TargetObject, int delay);
void SearchTopicanim_Animation( lv_obj_t *TargetObject, int delay);
void SearchNodeanim_Animation( lv_obj_t *TargetObject, int delay);
void informaanim_Animation( lv_obj_t *TargetObject, int delay);
void CloseImageanim_Animation( lv_obj_t *TargetObject, int delay);


// SCREEN: ui_start_menu
void ui_start_menu_screen_init(void);
lv_obj_t *ui_start_menu;
lv_obj_t *ui_rtt_logo;
void ui_event_console_name( lv_event_t * e);
lv_obj_t *ui_console_name;
lv_obj_t *ui_gui_describer;
void ui_event_ImgButton3( lv_event_t * e);
lv_obj_t *ui_ImgButton3;
lv_obj_t *ui_console_desc;


// SCREEN: ui_Main_Screen
void ui_Main_Screen_screen_init(void);
lv_obj_t *ui_Main_Screen;
lv_obj_t *ui_top_panel;
void ui_event_console2_desc( lv_event_t * e);
lv_obj_t *ui_console2_desc;
void ui_event_return_button( lv_event_t * e);
lv_obj_t *ui_return_button;
lv_obj_t *ui_wlan;
lv_obj_t *ui_battery;
void ui_event_calendar_label( lv_event_t * e);
lv_obj_t *ui_calendar_label;
lv_obj_t *ui_mesg_list_panel;
void ui_event_List_Topic_Dropdown( lv_event_t * e);
lv_obj_t *ui_List_Topic_Dropdown;
void ui_event_List_Node_Dropdown( lv_event_t * e);
lv_obj_t *ui_List_Node_Dropdown;
void ui_event_Search_Topic_TextArea( lv_event_t * e);
lv_obj_t *ui_Search_Topic_TextArea;
void ui_event_Search_Node_TextArea( lv_event_t * e);
lv_obj_t *ui_Search_Node_TextArea;
void ui_event_Subscriber_TextArea( lv_event_t * e);
lv_obj_t *ui_Subscriber_TextArea;
void ui_event_Pubscriber_TextArea( lv_event_t * e);
lv_obj_t *ui_Pubscriber_TextArea;
lv_obj_t *ui_mesg_handler;
lv_obj_t *ui_Console_Textarea;
lv_obj_t *ui_SubFunct_panel;
lv_obj_t *ui_SubTopicHander_Label;
void ui_event_SubFuncConfirm_Button( lv_event_t * e);
lv_obj_t *ui_SubFuncConfirm_Button;
lv_obj_t *ui_SubFuncWord_label;
void ui_event_CloseFigure1( lv_event_t * e);
lv_obj_t *ui_CloseFigure1;
lv_obj_t *ui_SubFuncConsole_panel;
lv_obj_t *ui_SubNodeName_label;
lv_obj_t *ui_SubMsgType_label;
lv_obj_t *ui_TopicName_label;
void ui_event_SubNodeName_textarea( lv_event_t * e);
lv_obj_t *ui_SubNodeName_textarea;
void ui_event_SubMsgType_textarea( lv_event_t * e);
lv_obj_t *ui_SubMsgType_textarea;
void ui_event_SubTopicNameMsg_textarea( lv_event_t * e);
lv_obj_t *ui_SubTopicNameMsg_textarea;
lv_obj_t *ui_PubFunct_panel;
lv_obj_t *ui_PubTopicHander_Label;
void ui_event_PubFuncConfirm_Button( lv_event_t * e);
lv_obj_t *ui_PubFuncConfirm_Button;
lv_obj_t *ui_PubFuncWord_label;
void ui_event_CloseFigure2( lv_event_t * e);
lv_obj_t *ui_CloseFigure2;
lv_obj_t *ui_PubFuncConsole_panel;
lv_obj_t *ui_PubNodeName_label;
lv_obj_t *ui_PubNodeID_label;
lv_obj_t *ui_PubTopicName_label;
void ui_event_PubNodeName_textarea( lv_event_t * e);
lv_obj_t *ui_PubNodeName_textarea;
void ui_event_PubNodeID_textarea( lv_event_t * e);
lv_obj_t *ui_PubNodeID_textarea;
void ui_event_PubTopicNameMsg_textarea( lv_event_t * e);
lv_obj_t *ui_PubTopicNameMsg_textarea;
lv_obj_t *ui_Func_Ctrl_Panel;
void ui_event_Func_Ctrl_label( lv_event_t * e);
lv_obj_t *ui_Func_Ctrl_label;
lv_obj_t *ui_Turtlesim_Demo_Panel;
void ui_event_Turtlesim_Demo_Label( lv_event_t * e);
lv_obj_t *ui_Turtlesim_Demo_Label;
lv_obj_t *ui_Turtlesim_background;
lv_obj_t *ui_Terminal_TextArea;
lv_obj_t *ui_Turtle_Figure;
lv_obj_t *ui_Terminal_Figure;
lv_obj_t *ui_Information_panel;
void ui_event_Information_label( lv_event_t * e);
lv_obj_t *ui_Information_label;
void ui_event_Keyboard( lv_event_t * e);
lv_obj_t *ui_Keyboard;
lv_obj_t *ui_Calendar;
lv_obj_t *ui_console_desc1;
lv_obj_t *ui_Information_TextArea;
void ui_event_Close_image( lv_event_t * e);
lv_obj_t *ui_Close_image;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_1739134342[2] = {&ui_img_1650958959, &ui_img_1915926208};
const lv_img_dsc_t *ui_imgset_close[1] = {&ui_img_close2_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void console_desc1_anim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 20);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, 0, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, true );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y );
lv_anim_start(&PropertyAnimation_0);

}
void pressed_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 200);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_width );
lv_anim_set_values(&PropertyAnimation_0, 0, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, true );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_width );
lv_anim_start(&PropertyAnimation_0);

}
void console_desc2_anim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 20);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, 0, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_linear);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y );
lv_anim_start(&PropertyAnimation_0);

}
void clendar_anim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 20);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x );
lv_anim_set_values(&PropertyAnimation_0, 0, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x );
lv_anim_start(&PropertyAnimation_0);

}
void keyboardanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 200);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, 50, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_in_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, true );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y );
lv_anim_start(&PropertyAnimation_0);

}
void FunctrlPanelanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 200);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, 0, 50 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_overshoot);
lv_anim_set_delay( &PropertyAnimation_0, delay + 100 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 200);
lv_anim_set_playback_delay(&PropertyAnimation_0, 100);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 2);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y );
lv_anim_start(&PropertyAnimation_0);

}
void Turtlesimanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 200);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, 0, 50 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_overshoot);
lv_anim_set_delay( &PropertyAnimation_0, delay + 100 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 200);
lv_anim_set_playback_delay(&PropertyAnimation_0, 100);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 2);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y );
lv_anim_start(&PropertyAnimation_0);

}
void Informationanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 200);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, 0, 50 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_overshoot);
lv_anim_set_delay( &PropertyAnimation_0, delay + 100 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 200);
lv_anim_set_playback_delay(&PropertyAnimation_0, 100);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 2);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y );
lv_anim_start(&PropertyAnimation_0);

}
void MesgListanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 1000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x );
lv_anim_set_values(&PropertyAnimation_0, -10, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_overshoot);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x );
lv_anim_start(&PropertyAnimation_0);

}
void MesgTopicHanderanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 1000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, -50, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_overshoot);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y );
lv_anim_start(&PropertyAnimation_0);

}
void MsgConsoleanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 1000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x );
lv_anim_set_values(&PropertyAnimation_0, 200, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_overshoot);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, true );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x );
lv_anim_start(&PropertyAnimation_0);

}
void Subscriberanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 500);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_0, 120, 255 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_in_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity );
lv_anim_start(&PropertyAnimation_0);

}
void Publisheranim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 500);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_0, 120, 255 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_in_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity );
lv_anim_start(&PropertyAnimation_0);

}
void TopicListanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 500);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_0, 120, 255 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_in_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity );
lv_anim_start(&PropertyAnimation_0);

}
void NodeListanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 500);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_0, 120, 255 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_in_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity );
lv_anim_start(&PropertyAnimation_0);

}
void SearchTopicanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 500);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_0, 120, 255 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_in_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity );
lv_anim_start(&PropertyAnimation_0);

}
void SearchNodeanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 1000);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity );
lv_anim_set_values(&PropertyAnimation_0, 120, 255 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_ease_in_out);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity );
lv_anim_start(&PropertyAnimation_0);

}
void informaanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 500);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, -50, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_overshoot);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y );
lv_anim_start(&PropertyAnimation_0);

}
void CloseImageanim_Animation( lv_obj_t *TargetObject, int delay)
{
ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
PropertyAnimation_0_user_data->target = TargetObject;
PropertyAnimation_0_user_data->val = -1;
lv_anim_t PropertyAnimation_0;
lv_anim_init(&PropertyAnimation_0);
lv_anim_set_time(&PropertyAnimation_0, 500);
lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y );
lv_anim_set_values(&PropertyAnimation_0, -50, 0 );
lv_anim_set_path_cb( &PropertyAnimation_0, lv_anim_path_overshoot);
lv_anim_set_delay( &PropertyAnimation_0, delay + 0 );
lv_anim_set_deleted_cb( &PropertyAnimation_0, _ui_anim_callback_free_user_data );
lv_anim_set_playback_time(&PropertyAnimation_0, 0);
lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
 lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
lv_anim_set_early_apply( &PropertyAnimation_0, false );
 lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y );
lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_console_name( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_PRESSED) {
      console_desc1_anim_Animation(ui_console_desc, 0);
      _ui_flag_modify( ui_console_desc, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_ImgButton3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_Main_Screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0, &ui_Main_Screen_screen_init);
}
}
void ui_event_console2_desc( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      console_desc2_anim_Animation(ui_console_desc1, 0);
      _ui_flag_modify( ui_console_desc1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_return_button( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_start_menu, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0, &ui_start_menu_screen_init);
}
}
void ui_event_calendar_label( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      clendar_anim_Animation(ui_Calendar, 0);
      _ui_flag_modify( ui_Calendar, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_List_Topic_Dropdown( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_label_set_property(ui_mesg_handler, _UI_LABEL_PROPERTY_TEXT, "|<<   Please choose a topic   >>|");
}
if ( event_code == LV_EVENT_CLICKED) {
      TopicListCallback( e );
}
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      topic_select_callback( e );
}
}
void ui_event_List_Node_Dropdown( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_label_set_property(ui_mesg_handler, _UI_LABEL_PROPERTY_TEXT, "|<<   Please choose a node   >>|");
}
if ( event_code == LV_EVENT_CLICKED) {
      NodeListCallback( e );
}
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      node_select_callback( e );
}
}
void ui_event_Search_Topic_TextArea( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_keyboard_set_target(ui_Keyboard,  ui_Search_Topic_TextArea);
      keyboardanim_Animation(ui_Keyboard, 0);
      _ui_flag_modify( ui_Keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      SearchTopicCallback( e );
}
}
void ui_event_Search_Node_TextArea( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_keyboard_set_target(ui_Keyboard,  ui_Search_Node_TextArea);
      keyboardanim_Animation(ui_Keyboard, 0);
      _ui_flag_modify( ui_Keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
if ( event_code == LV_EVENT_VALUE_CHANGED) {
      SearchNodeCallback( e );
}
}
void ui_event_Subscriber_TextArea( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_SubFunct_panel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_Pubscriber_TextArea( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_PubFunct_panel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_SubFuncConfirm_Button( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_SubFunct_panel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
if ( event_code == LV_EVENT_CLICKED) {
      SubTopicCallback( e );
}
}
void ui_event_CloseFigure1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_SubFunct_panel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_SubNodeName_textarea( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_keyboard_set_target(ui_Keyboard,  ui_SubNodeName_textarea);
      keyboardanim_Animation(ui_Keyboard, 0);
      _ui_flag_modify( ui_Keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
if ( event_code == LV_EVENT_DEFOCUSED) {
      SubNodeNameCallback( e );
}
}
void ui_event_SubMsgType_textarea( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_keyboard_set_target(ui_Keyboard,  ui_SubMsgType_textarea);
      keyboardanim_Animation(ui_Keyboard, 0);
      _ui_flag_modify( ui_Keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
if ( event_code == LV_EVENT_DEFOCUSED) {
      SubMsgTypeCallback( e );
}
}
void ui_event_SubTopicNameMsg_textarea( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_keyboard_set_target(ui_Keyboard,  ui_SubTopicNameMsg_textarea);
      keyboardanim_Animation(ui_Keyboard, 0);
      _ui_flag_modify( ui_Keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
if ( event_code == LV_EVENT_DEFOCUSED) {
      SubTopicNameCallback( e );
}
}
void ui_event_PubFuncConfirm_Button( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_PubFunct_panel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
if ( event_code == LV_EVENT_CLICKED) {
      PubTopicCallback( e );
}
}
void ui_event_CloseFigure2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_PubFunct_panel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_PubNodeName_textarea( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_keyboard_set_target(ui_Keyboard,  ui_PubNodeName_textarea);
      keyboardanim_Animation(ui_Keyboard, 0);
      _ui_flag_modify( ui_Keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
if ( event_code == LV_EVENT_DEFOCUSED) {
      PubNodeNameCallback( e );
}
}
void ui_event_PubNodeID_textarea( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_keyboard_set_target(ui_Keyboard,  ui_PubNodeID_textarea);
      keyboardanim_Animation(ui_Keyboard, 0);
      _ui_flag_modify( ui_Keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
if ( event_code == LV_EVENT_DEFOCUSED) {
      PubNodeIDCallback( e );
}
}
void ui_event_PubTopicNameMsg_textarea( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_keyboard_set_target(ui_Keyboard,  ui_PubTopicNameMsg_textarea);
      keyboardanim_Animation(ui_Keyboard, 0);
      _ui_flag_modify( ui_Keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
if ( event_code == LV_EVENT_DEFOCUSED) {
      PubTopicNameCallback( e );
}
}
void ui_event_Func_Ctrl_label( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_mesg_list_panel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
      MesgListanim_Animation(ui_mesg_list_panel, 0);
}
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_mesg_handler, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
      MesgTopicHanderanim_Animation(ui_mesg_handler, 0);
}
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Console_Textarea, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
      MsgConsoleanim_Animation(ui_Console_Textarea, 0);
}
}
void ui_event_Turtlesim_Demo_Label( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      Turtlesimanim_Animation(ui_Turtlesim_Demo_Panel, 0);
}
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Turtlesim_background, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
      _ui_flag_modify( ui_Terminal_Figure, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Terminal_TextArea, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Turtle_Figure, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_Information_label( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      Informationanim_Animation(ui_Information_panel, 0);
      _ui_flag_modify( ui_Information_TextArea, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
      informaanim_Animation(ui_Information_TextArea, 0);
      _ui_flag_modify( ui_Close_image, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
      CloseImageanim_Animation(ui_Close_image, 0);
}
if ( event_code == LV_EVENT_CLICKED) {
      InformationCallback( e );
}
}
void ui_event_Keyboard( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_READY) {
      _ui_flag_modify( ui_Keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}
void ui_event_Close_image( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_flag_modify( ui_Information_TextArea, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
      _ui_flag_modify( ui_Close_image, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_start_menu_screen_init();
ui_Main_Screen_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_start_menu);
}
