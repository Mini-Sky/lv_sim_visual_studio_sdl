#include "Page.h"


lv_obj_t* RGB_Create(void)
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);
    Title_Create(scr, "RGB");
    ExitButton_Create(scr, MainMenuReturn_Handler);
    return scr;
}
lv_obj_t* OLED_Create(void)
{
    lv_obj_t* scr = lv_obj_create(NULL, NULL);
    Title_Create(scr, "OLED");
    ExitButton_Create(scr, MainMenuReturn_Handler);
    return scr;
}


//lv_obj_t* Bluetooth_Create(void)
//{
//    lv_obj_t* scr = lv_obj_create(NULL, NULL);
//    Title_Create(scr, "Bluetooth");
//    ExitButton_Create(scr, event_handler);
//    BtSymbol_Create(scr, event_handler);
//    return scr;
//}
