#include "Page.h"


LV_IMG_DECLARE(img_src_rgb);

static void ImgRGB_Create(lv_obj_t* par)
{
    lv_obj_t* img = lv_img_create(par, NULL);
    lv_img_set_src(img, &img_src_rgb);
    lv_obj_align(img, NULL, LV_ALIGN_CENTER, 0, 0);
}

lv_obj_t* RGB_Create(void)
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);
    ImgRGB_Create(scr);
    ExitButton_Create(scr, MainMenuReturn_Handler);
    return scr;
}
