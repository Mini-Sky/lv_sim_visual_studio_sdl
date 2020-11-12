#include "Page.h"
#include "bsp/bsp.h"

LV_IMG_DECLARE(img_src_infrared);
LV_IMG_DECLARE(img_src_wall2);

typedef struct {
    lv_coord_t x_ofs;
    lv_coord_t y_ofs;
    lv_obj_t* img;
}ImgInfraredWall_t;

static ImgInfraredWall_t ImgInfrared_Grp[4] =
{
    {-15, 20},
    {15, 20},
    {-45, 20},
    {45, 20}
};

static ImgInfraredWall_t ImgWall_Grp[4] =
{
    {-15, -20},
    {15, -20},
    {-45, 20},
    {45, 20}
};

static void ImgInfrared_Create(lv_obj_t* par)
{
    for (int i = 0; i < 4; i++)
    {
        lv_obj_t* img = lv_img_create(par, NULL);
        lv_img_set_src(img, &img_src_infrared);
        lv_obj_align(img, NULL, LV_ALIGN_CENTER, ImgInfrared_Grp[i].x_ofs, ImgInfrared_Grp[i].y_ofs);
        ImgInfrared_Grp[i].img = img;
    }
}
static void ImgWall_Create(lv_obj_t* par)
{
    lv_obj_t* img1 = lv_img_create(par, NULL);
    lv_img_set_src(img1, &img_src_wall2);
    lv_obj_align(img1, NULL, LV_ALIGN_CENTER, -15, -20);
 

    lv_obj_t* img2 = lv_img_create(par, NULL);
    lv_img_set_src(img2, &img_src_wall2);
    lv_obj_align(img2, NULL, LV_ALIGN_CENTER, 15, -20);

    lv_obj_t* img3 = lv_img_create(par, NULL);
    lv_img_set_src(img3, &img_src_wall2);
    lv_obj_align(img3, NULL, LV_ALIGN_CENTER, -45, -20);

    lv_obj_t* img4 = lv_img_create(par, NULL);
    lv_img_set_src(img4, &img_src_wall2);
    lv_obj_align(img4, NULL, LV_ALIGN_CENTER, 45, -20);
}



lv_obj_t* FtTest_Create(void)
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);

    ExitButton_Create(scr, MainMenuReturn_Handler);
    ImgInfrared_Create(scr);
    ImgWall_Create(scr);

    return scr;
}

//static void Ft_led(lv_obj_t* par)
//{
//    /*Create a LED and switch it OFF*/
//
//    lv_obj_t* led1 = lv_led_create(par, NULL);
//    lv_obj_set_size(led1, 15, 15);
//    lv_obj_align(led1, NULL, LV_ALIGN_CENTER, -15, 0);
//
//    lv_led_on(led1);
//
//    /*Copy the previous LED and set a brightness*/
//    lv_obj_t* led2 = lv_led_create(par, led1);
//    lv_obj_align(led2, NULL, LV_ALIGN_CENTER, 15, 0);
//
//
//    /*Copy the previous LED and switch it ON*/
//    lv_obj_t* led3 = lv_led_create(par, led1);
//    lv_obj_align(led3, NULL, LV_ALIGN_CENTER, -45, 0);
//
//    lv_obj_t* led4 = lv_led_create(par, led1);
//    lv_obj_align(led4, NULL, LV_ALIGN_CENTER, 45, 0);
//
//}