// #include <gmock/gmock.h>
// #include "../Washer_Hdlr/Washer_Hdlr.h"
// #include "../Wiper_Hdlr/Wiper_Hdlr.h"
// // Mock class for the communication interface
// class MockComLayer {
// public:
//     MOCK_METHOD(int, Com_ReadVehicleMode, (), (const)); /*Mock function without arguments and return int*/
//     MOCK_METHOD(int, Com_ReadwiperRequest, (), (const)); /*Mock function without arguments and return int*/
//     MOCK_METHOD(int, com_ReadwasherRequest, (), (const)); /*Mock function without arguments and return int*/
//     MOCK_METHOD(void, Rte_Write_Washer, (wi_mode* ptr), (const)); /*Mock function with 1 argument and return nothing*/
//     MOCK_METHOD(void, Rte_Write_Intermittent, (wi_mode* ptr), (const)); /*Mock function with 1 argument and return nothing*/
//     MOCK_METHOD(void, Rte_Write_Low, (wi_mode* ptr), (const)); /*Mock function with 1 argument and return nothing*/
//     MOCK_METHOD(void, Rte_Write_High, (wi_mode* ptr), (const)); /*Mock function with 1 argument and return nothing*/


// };

// class MockRteLayer {
// public:
//     virtual ~MockRteLayer() = default;
//     virtual void Rte_Write_Washer(wi_mode* ptr) = 0;
// };
// class MockRte : public MockRteLayer {
// public:
//     MOCK_METHOD(void, Rte_Write_Washer, (wi_mode* ptr), (override));
// };

// // Global pointer to the mock object
// extern MockComLayer* mock_com;
// extern MockRte* mock_rte;


#pragma once

#include <gmock/gmock.h>

extern "C"
{
    #include "../Wiper_Hdlr/Wiper_Hdlr.h"
}

/* Mock Class */

class MockComLayer
{
public:

    MOCK_METHOD(int, Com_ReadVehicleMode, (), ());
    MOCK_METHOD(int, Com_ReadwiperRequest, (), ());
    MOCK_METHOD(int, Com_ReadwasherRequest, (), ());

    MOCK_METHOD(void, Rte_Write_Washer, (wiper_mode* ptr), ());
    MOCK_METHOD(void, Rte_Write_Intermittent, (wiper_mode* ptr), ());
    MOCK_METHOD(void, Rte_Write_Low, (wiper_mode* ptr), ());
    MOCK_METHOD(void, Rte_Write_High, (wiper_mode* ptr), ());
};


/* Interface */

class IRte
{
public:

    virtual ~IRte() = default;

    virtual void Rte_Write_Washer(wiper_mode* ptr) = 0;
};


/* Mock RTE */

class MockRte : public IRte
{
public:

    MOCK_METHOD(void, Rte_Write_Washer, (wiper_mode* ptr), (override));
};