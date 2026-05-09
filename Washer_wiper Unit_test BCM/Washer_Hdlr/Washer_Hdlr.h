#ifndef WASHER_HDLR_H
#define WASHER_HDLR_H
 
typedef enum {
    WASHER_ON,
    WASHER_OFF
} washer_mode;
 
extern washer_mode current_washer_mode;
extern void washer_Hdlr_MainFunction(void);
extern int washer_Hdlr_ReadCmd(void);
extern void washer_Hdlr_InitFun(void);
 
#endif // WASHER_H