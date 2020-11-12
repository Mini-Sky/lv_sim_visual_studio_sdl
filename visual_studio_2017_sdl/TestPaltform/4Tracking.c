#include "Page.h"

static void Ft_led(lv_obj_t* par)
{
    /*Create a LED and switch it OFF*/

    lv_obj_t* led1 = lv_led_create(par, NULL);
    lv_obj_set_size(led1,15,15);
    lv_obj_align(led1, NULL, LV_ALIGN_CENTER, -15, 0);

    lv_led_on(led1);

    /*Copy the previous LED and set a brightness*/
    lv_obj_t* led2 = lv_led_create(par, led1);
    lv_obj_align(led2, NULL, LV_ALIGN_CENTER, 15, 0);


    /*Copy the previous LED and switch it ON*/
    lv_obj_t* led3 = lv_led_create(par, led1);
    lv_obj_align(led3, NULL, LV_ALIGN_CENTER, -45, 0);

    lv_obj_t* led4 = lv_led_create(par, led1);
    lv_obj_align(led4, NULL, LV_ALIGN_CENTER, 45, 0);

}

lv_obj_t* FtTest_Create(void)
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);

    //Title_Create(scr, "4-Tracking");

    ExitButton_Create(scr, MainMenuReturn_Handler);
    Ft_led(scr);

    return scr;
}

