#include "Page.h"

void TtTest_bar(lv_obj_t* par)
{
    lv_obj_t* bar1 = lv_bar_create(par, NULL);
    lv_obj_set_size(bar1, 10, 30);
    lv_bar_set_anim_time(bar1, 2000);
    lv_bar_set_value(bar1, 100, LV_ANIM_ON);
    lv_obj_align(bar1, NULL, LV_ALIGN_CENTER, 0, 0);

    lv_obj_t* bar2 = lv_bar_create(par, NULL);
    lv_obj_set_size(bar2, 10, 30);
    lv_bar_set_anim_time(bar2, 2000);
    lv_bar_set_value(bar2, 100, LV_ANIM_ON);
    lv_obj_align(bar2, NULL, LV_ALIGN_CENTER, -43, 0);

    lv_obj_t* bar3 = lv_bar_create(par, NULL);
    lv_obj_set_size(bar3, 10, 30);
    lv_bar_set_anim_time(bar3, 2000);
    lv_bar_set_value(bar3, 100, LV_ANIM_ON);
    lv_obj_align(bar3, NULL, LV_ALIGN_CENTER, 43, 0);
}

lv_obj_t* TtTest_Creat()
{
	lv_obj_t* scr = lv_obj_create(NULL, NULL);
	ExitButton_Create(scr, MainMenuReturn_Handler);
    TtTest_bar(scr);
	return scr;
}
