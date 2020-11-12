#include "Page.h"

static void ObjRectangle_Create(lv_obj_t* par)
{
    lv_obj_t* obj = lv_obj_create(par, NULL);
    lv_obj_set_style_local_radius(obj, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 0);
    lv_obj_set_style_local_border_width(obj, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 32);
    lv_obj_set_size(obj, 128, 64);
    lv_obj_align(obj, NULL, LV_ALIGN_CENTER, 0, 0);
}

lv_obj_t* OLED_Create(void)
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);
    ObjRectangle_Create(scr);
    ExitButton_Create(scr, MainMenuReturn_Handler);


    return scr;
}
