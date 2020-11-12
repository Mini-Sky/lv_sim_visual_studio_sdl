#include "Page.h" 

void Title_Create(lv_obj_t* par, const char* text)
{
    lv_obj_t* label = lv_label_create(par, NULL);
    lv_label_set_text(label, text);
    lv_obj_align(label, NULL, LV_ALIGN_IN_TOP_MID, 0, 2);
    /*Create an array for the points of the line*/
    static lv_point_t line_points[] = { {0, 0}, {128, 0} };

    /*Create style*/
    static lv_style_t style_line;
    lv_style_init(&style_line);
    lv_style_set_line_width(&style_line, LV_STATE_DEFAULT, 1);
    lv_style_set_line_color(&style_line, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_style_set_line_rounded(&style_line, LV_STATE_DEFAULT, false);

    /*Create a line and apply the new style*/
    lv_obj_t* line1;
    line1 = lv_line_create(par, NULL);
    lv_line_set_points(line1, line_points, 2);     /*Set the points*/
    lv_obj_add_style(line1, LV_LINE_PART_MAIN, &style_line);     /*Set the points*/
    lv_obj_align(line1, label, LV_ALIGN_OUT_BOTTOM_MID, 0, 3);
}

void ExitButton_Create(lv_obj_t* par,lv_event_cb_t event_cb)
{
    lv_obj_t* btn = lv_btn_create(par, NULL);
    lv_obj_set_event_cb(btn, event_cb);
    lv_obj_set_size(btn, 14, 14);
    lv_obj_align(btn, NULL, LV_ALIGN_IN_TOP_RIGHT, 0, 0);

    lv_obj_t* label = lv_label_create(btn, NULL);
    lv_label_set_text(label, LV_SYMBOL_CLOSE);
}

void MainMenuReturn_Handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_CLICKED)
    {
        lv_obj_t* scr = MainMenu_Create();
        lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0, true);
    }
}
