#include "Page.h"
LV_IMG_DECLARE(img_src_bluetooth);
LV_IMG_DECLARE(img_src_iphone);
LV_IMG_DECLARE(img_src_data);


static void IMG_Bluetooth_Create(lv_obj_t* par)
{
    lv_obj_t* img = lv_img_create(par, NULL);
    lv_img_set_src(img, &img_src_bluetooth);
    lv_obj_align(img, NULL, LV_ALIGN_IN_LEFT_MID, 0, 5);
}

static void IMG_Data_Create(lv_obj_t* par)
{
    lv_obj_t* img = lv_img_create(par, NULL);
    lv_img_set_src(img, &img_src_data);
    lv_obj_align(img, NULL, LV_ALIGN_CENTER, 0, -10);
}

static void IMG_Iphone_Create(lv_obj_t* par)
{
    lv_obj_t* img = lv_img_create(par, NULL);
    lv_img_set_src(img, &img_src_iphone);
    lv_obj_align(img, NULL, LV_ALIGN_IN_RIGHT_MID, 0, 5);
}

lv_obj_t* Bluetooth_Create(void)
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);
    IMG_Bluetooth_Create(scr);
    IMG_Data_Create(scr);
    IMG_Iphone_Create(scr);

    ExitButton_Create(scr, MainMenuReturn_Handler);

    return scr;
}