#include "Page.h"
#include <stdio.h>

static lv_obj_t* Btn1;
static lv_obj_t* Btn2;

static void Button_EventHandler(lv_obj_t * obj, lv_event_cb_t event)
{
    if (obj == Btn1)
    {
        if (event == LV_EVENT_PRESSED)
        {
            printf("Btn1 is Pressed!!!\r\n");
        }
    }
    else if (obj == Btn2)
    {
        if (event == LV_EVENT_PRESSED)
        {
            printf("Btn2 is Pressed!!!\r\n");
        }
    }

}
static void Button_Create(lv_obj_t* par)
{

    lv_obj_t* btn1 = lv_btn_create(par,NULL);
    lv_obj_set_event_cb(btn1,Button_EventHandler);
    lv_obj_set_size(btn1,20,20);
    lv_obj_align(btn1,NULL,LV_ALIGN_IN_LEFT_MID,20,0);

    lv_obj_t* label1 = lv_label_create(btn1,NULL);
    lv_label_set_text(label1,LV_SYMBOL_OK);

    lv_obj_t* btn2 = lv_btn_create(par, NULL);
    lv_obj_set_event_cb(btn2, Button_EventHandler);
    lv_obj_set_size(btn2, 20, 20);
    lv_obj_align(btn2, NULL, LV_ALIGN_IN_RIGHT_MID, -20, 0);

    lv_obj_t* label2 = lv_label_create(btn2, NULL);
    lv_label_set_text(label2, LV_SYMBOL_STOP);

    Btn1 = btn1;
    Btn2 = btn2;
}


static void event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_CLICKED)
    {
        lv_obj_t* scr = MainMenu_Create();
        lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0, true);
    }
}

lv_obj_t* EventTest_Create(void)
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);

    Title_Create(scr, "Event Test");
    ExitButton_Create(scr, MainMenuReturn_Handler);
    Button_Create(scr);

    return scr;
}

