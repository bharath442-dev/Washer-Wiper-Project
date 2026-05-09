#ifndef WASHER_WIPERCTRL_H
#define WASHER_WIPERCTRL_H
 
enum STATUS
{
    OK,
    NOK
};
 
enum VehicleMode
{
    OFF,
    ACC,
    ON,
    START
};
 
enum wiperRequest
{
    WIPER_OFF_REQUESTED,
    INTERMITTENT_WIPER_REQUESTED,
    LOW_WIPER_REQUESTED,
    HIGH_WIPER_REQUESTED
};
 
enum WasherRequest
{
    WASHER_OFF_REQUESTED,
    WASHER_ON_REQUESTED
};
 
enum washer_Cmd
{
    DEACTIVATE_WASHER,
    ACTIVATE_WASHER
};
enum wiper_Cmd
{
    DEACTIVATE,
    ACTIVATE_INTERMITTENT_WIPER,
    ACTIVATE_LOW_WIPER,
    ACTIVATE_HIGH_WIPER
};
 
enum wiperStatus
{
    NOT_ACTIVATED,
    ACTIVATED,
    INTERMITTENT_WIPER_ACTIVATED,
    LOW_WIPER_ACTIVATED,
    HIGH_WIPER_ACTIVATED,
    ALL_ACTIVATED,
    ERROR
};
 
 
extern void washer_wiper_MainFunction(void);
extern void washer_wiper_InitFunction(void);
extern int washer_wiper_controlwipers(void);
extern int washer_wiper_controlwasher(void);
 
extern int washerrequest,wiperrequest;
extern int vehicleMode;
extern int washerrequest_old,wiperrequest_old,vehicleMode_old;
 
extern int washer_Cmd, wiper_Cmd;
 
#endif //WASHER_WIPER_Hctrl.h
 
