#include "Page.h"


LV_IMG_DECLARE(img_src_wall);
LV_IMG_DECLARE(img_src_ultrasonic);

static void ImgWall_Create(lv_obj_t* par)
{
    lv_obj_t* img1 = lv_img_create(par, NULL);
    lv_img_set_src(img1, &img_src_wall);
    lv_obj_align(img1, NULL, LV_ALIGN_IN_RIGHT_MID, 0, lv_obj_get_height(img1)/2+10);
    
    lv_obj_t* img2 = lv_img_create(par, NULL);
    lv_img_set_src(img2, &img_src_wall);
    lv_obj_align(img2, NULL, LV_ALIGN_IN_RIGHT_MID, 0, 0);
}

static void ImgUltrasonic_Create(lv_obj_t* par)
{
    lv_obj_t* img = lv_img_create(par, NULL);
    lv_img_set_src(img, &img_src_ultrasonic);
    lv_obj_align(img, NULL, LV_ALIGN_IN_LEFT_MID, 0, 5);
}

static void LabelDistance_Create(lv_obj_t* par)
{
    lv_obj_t* label = lv_label_create(par, NULL);
    lv_obj_align(label, NULL, LV_ALIGN_IN_BOTTOM_LEFT, 0, 0);
    lv_label_set_text(label, "Distance:15cm");
}

lv_obj_t* UtTest_Create(void)
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);
    

    ExitButton_Create(scr, MainMenuReturn_Handler);
    ImgWall_Create(scr);
    ImgUltrasonic_Create(scr);
    LabelDistance_Create(scr);
    return scr;
}

