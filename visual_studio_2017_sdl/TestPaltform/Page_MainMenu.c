#include "Page.h"

static lv_obj_t* Title;

static void Title_Create(lv_obj_t* par)
{
    lv_obj_t* label = lv_label_create(par, NULL);
    lv_label_set_text(label, "TestPlatform");
    lv_obj_align(label, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);

    Title = label;
}


static void event_handler(lv_obj_t* obj, lv_event_t event)
{
    if (event == LV_EVENT_CLICKED) {
        const char* text = lv_list_get_btn_text(obj);
        //lv_scr_load_anim

        if (strcmp(text, "Ultrasonic") == 0)
        {
            lv_obj_t* scr = UtTest_Create();
            lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0,true);
        }
        else if (strcmp(text, "4Tracking") == 0)
        {
            lv_obj_t* scr = FtTest_Create();
            lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, true);
        }
        else if (strcmp(text, "3Tracking") == 0)
        {
            lv_obj_t* scr = TtTest_Creat();
            lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, true);
        }
        else if (strcmp(text, "HW and LT") == 0)
        {
            lv_obj_t* scr = HwLtTest_Create();
            lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, true);
        }
        else if (strcmp(text, "RGB") == 0)
        {
            lv_obj_t* scr = RGB_Create();
            lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, true);
        }
        else if (strcmp(text, "OLED") == 0)
        {
            lv_obj_t* scr = OLED_Create();
            lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, true);
        }
        else if (strcmp(text, "Servo") == 0)
        {
            lv_obj_t* scr = Servo_Create();
            lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, true);
        }
        else if (strcmp(text, "MPU6050") == 0)
        {
            lv_obj_t* scr = MPU6050_Create();
            lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, true);
        }
        else if (strcmp(text, "Bluetooth") == 0)
        {
            /*lv_obj_t* scr = Bluetooth_Create();
            lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, true);*/
        }
        else if (strcmp(text, "Event_Test") == 0)
        {
            lv_obj_t* scr = EventTest_Create();
            lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, true);
        }

    }
}

static const char* My_List[] = {
    "Ultrasonic",               //³¬Éù²¨²â¾àÄ£¿é
    "4Tracking",                //ËÄÂ·Ñ­¼£Ä£¿é    
    "3Tracking",                //ÈýÂ·Ñ­¼£Ä£¿é
    "HW and LT",                //ºìÍâÑ°¹âÄ£¿é
    "RGB",                      //RGBÄ£¿é
    "OLED",                     //OLEDÏÔÊ¾ÆÁ
    "Servo",                    //¶æ»ú
    "MPU6050",                  //ÍÓÂÝÒÇ
    "Bluetooth",                 //À¶ÑÀ4.0Ä£¿é
    "Event_Test"
};

static void SensorList_Create(lv_obj_t* par)
{
    /*Create a list*/
    lv_obj_t* list1 = lv_list_create(par, NULL);
    lv_obj_set_size(list1, lv_obj_get_width(par), lv_obj_get_height(par) - lv_obj_get_height(Title));
    lv_obj_align(list1, NULL, LV_ALIGN_IN_BOTTOM_MID, 0, 0);

    /*Add buttons to the list*/
    for (int i = 0; i < (sizeof(My_List) / sizeof(const char*)); i++)
    {
        lv_obj_t* list_btn = lv_list_add_btn(list1, NULL, My_List[i]);
        lv_obj_set_style_local_pad_top(list_btn, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 2);
        lv_obj_set_style_local_pad_bottom(list_btn, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 2);
        lv_obj_set_event_cb(list_btn, event_handler);
    }
}

lv_obj_t* MainMenu_Create()
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);

    Title_Create(scr);
    SensorList_Create(scr);

    return scr;
}
