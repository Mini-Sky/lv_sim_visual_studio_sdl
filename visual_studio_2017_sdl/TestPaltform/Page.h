#ifndef __PAGE_H
#define __PAGE_H

#include "lvgl/lvgl.h"

/*PageCommon*/
void Title_Create(lv_obj_t* par, const char* text);
void ExitButton_Create(lv_obj_t* par, lv_event_cb_t event_cb);
void MainMenuReturn_Handler(lv_obj_t* obj, lv_event_t event);

/*Pages*/
lv_obj_t* MainMenu_Create(void);
lv_obj_t* UtTest_Create(void);
lv_obj_t* FtTest_Create(void);
lv_obj_t* TtTest_Creat();
lv_obj_t* HwLtTest_Create(void);
lv_obj_t* RGB_Create(void);
lv_obj_t* OLED_Create(void);
lv_obj_t* Servo_Create(void);
lv_obj_t* MPU6050_Create(void);
lv_obj_t* Bluetooth_Create(void);
lv_obj_t* EventTest_Create(void);

#endif
