#include "Page.h"


void Servo_gauge(lv_obj_t* par)
{
    /*Describe the color for the needles*/
    static lv_color_t needle_colors[1];
    needle_colors[0] = LV_COLOR_WHITE;


    /*Create a gauge*/
    lv_obj_t* gauge1 = lv_gauge_create(par, NULL);
    lv_gauge_set_needle_count(gauge1, 1, needle_colors);
    lv_obj_set_size(gauge1, 120, 120);
    lv_gauge_set_range(gauge1, 0, 180);
    lv_gauge_set_scale(gauge1, 180, 10, 3);
    lv_obj_align(gauge1, NULL, LV_ALIGN_CENTER, 0, 28);
    /*Allow recoloring of the images according to the needles' color*/
    lv_obj_set_style_local_image_recolor_opa(gauge1, LV_GAUGE_PART_NEEDLE, LV_STATE_DEFAULT, LV_OPA_COVER);

    /*Set the values*/
    lv_gauge_set_value(gauge1, 0, 45);
}

lv_obj_t* Servo_Create(void)
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);
    Servo_gauge(scr);
    ExitButton_Create(scr, MainMenuReturn_Handler);
    return scr;
}
