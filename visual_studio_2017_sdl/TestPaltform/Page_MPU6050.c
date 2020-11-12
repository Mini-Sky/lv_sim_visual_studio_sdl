#include "Page.h"

static void ObjCircle_Create(lv_obj_t* par)
{
    lv_obj_t* Circle1 = lv_obj_create(par, NULL);
    lv_obj_set_style_local_radius(Circle1, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_RADIUS_CIRCLE);
    lv_obj_set_size(Circle1, 15, 15);
    lv_obj_align(Circle1, NULL, LV_ALIGN_CENTER, 0, 0);

    lv_obj_t* Circle2 = lv_obj_create(par, Circle1);
    lv_obj_align(Circle2, NULL, LV_ALIGN_IN_BOTTOM_LEFT, 0, 0);

    lv_obj_t* Circle3 = lv_obj_create(par, Circle1);
    lv_obj_align(Circle3, NULL, LV_ALIGN_IN_BOTTOM_RIGHT, 0, 0);

    lv_obj_t* Circle4 = lv_obj_create(par, Circle1);
    lv_obj_align(Circle4, NULL, LV_ALIGN_IN_TOP_LEFT, 0, 0);

    lv_obj_t* Circle5 = lv_obj_create(par, Circle1);
    lv_obj_align(Circle5, NULL, LV_ALIGN_IN_TOP_RIGHT, 0, 0);

}
static void LabelTimer_Create(lv_obj_t* par)
{
    lv_obj_t* label1 = lv_label_create(par, NULL);
    lv_label_set_text(label1, "Timer:1024mm");
    lv_obj_align(label1, NULL, LV_ALIGN_IN_BOTTOM_MID, 0, 0);

    lv_obj_t* label2 = lv_label_create(par, NULL);
    lv_label_set_text(label2, "Finish");
    lv_obj_set_style_local_text_font(label2, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_montserrat_16);
    lv_obj_align(label2, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);
    
}

lv_obj_t* MPU6050_Create(void)
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);
    
    ObjCircle_Create(scr);
    LabelTimer_Create(scr);
    ExitButton_Create(scr, MainMenuReturn_Handler);
    return scr;
}