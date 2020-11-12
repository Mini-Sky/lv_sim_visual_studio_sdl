#include "Page.h"

LV_IMG_DECLARE(img_src_sun);
LV_IMG_DECLARE(img_src_moon);
LV_IMG_DECLARE(img_src_infrared);
LV_IMG_DECLARE(img_src_wall2);


static void ImgInfrared_Create(lv_obj_t* par)
{
    lv_obj_t* img1 = lv_img_create(par, NULL);
    lv_img_set_src(img1, &img_src_infrared);
    lv_obj_align(img1, NULL, LV_ALIGN_CENTER, -32, 20);
}
static void ImgWall_Create(lv_obj_t* par)
{
    lv_obj_t* img1 = lv_img_create(par, NULL);
    lv_img_set_src(img1, &img_src_wall2);
    lv_obj_align(img1, NULL, LV_ALIGN_CENTER, -32, -20);
}
static void ImgSun_Create(lv_obj_t* par)
{
    lv_obj_t* img = lv_img_create(par, NULL);
    lv_img_set_src(img, &img_src_sun);
    lv_obj_align(img, NULL, LV_ALIGN_CENTER, 20, 0);
}

static void ImgMoon_Create(lv_obj_t* par)
{
    lv_obj_t* img = lv_img_create(par, NULL);
    lv_img_set_src(img, &img_src_moon);
    lv_obj_align(img, NULL, LV_ALIGN_CENTER, 50, 0);
}
static void Hw_Create(lv_obj_t* par)
{

    lv_obj_t* led1 = lv_led_create(par, NULL);
    lv_obj_set_size(led1, 15, 15);
    lv_obj_align(led1, NULL, LV_ALIGN_CENTER, -32, 0);
    lv_led_on(led1);

}


lv_obj_t* HwLtTest_Create(void)
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);
    ExitButton_Create(scr, MainMenuReturn_Handler);
    ImgMoon_Create(scr);
    ImgSun_Create(scr);
    //Hw_Create(scr);

    ImgInfrared_Create(scr);
    ImgWall_Create(scr);
    return scr;
}
