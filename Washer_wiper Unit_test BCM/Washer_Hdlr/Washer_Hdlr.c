#include "../washer_wiperCtrl/washer_wiperCtrl.h"
#include "Washer_Hdlr.h"
#include "../Rte/Rte.h"
 
// washer_mode current_wiper_mode = WASHER_OFF;
washer_mode current_washer_mode = WASHER_OFF;

/* called every 5 ms */
void washer_Hdlr_MainFunction(void)
{
    if (washer_Hdlr_ReadCmd())
    {
        //current_wiper_mode = WASHER_OFF;
        current_washer_mode = WASHER_OFF;
    }
}
 
int washer_Hdlr_ReadCmd(void)
{
    
    if (washer_Cmd == ACTIVATE_WASHER)
    {
        current_washer_mode = WASHER_ON;
        Rte_Write_Washer(&current_washer_mode);
        return 0;
    }
    return 1;
}
 
void washer_Hdlr_InitFun(void)
{
    //current_washer_mode = WASHER_OFF_REQUESTED;
     current_washer_mode = WASHER_OFF;
}
