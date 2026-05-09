// #include <gtest/gtest.h>
// #include <gmock/gmock.h>

// #include "Washer_wiperTests_mock.hpp"
// #include "Washer_wiperTests.hpp"

// extern "C"
// {
//     #include "../Washer_wiperCtrl/Washer_wiperCtrl.h"
//     #include "../Washer_Hdlr/Washer_Hdlr.h"
//     #include "../Wiper_Hdlr/Wiper_Hdlr.h"
// }

// // Global mock pointer
// MockComLayer* mock_com = nullptr;

// // Global value holder
// wi_mode value;

// // -----------------------------------------------------------------------------
// // Mocked C Functions
// // -----------------------------------------------------------------------------

// extern "C"
// {
//     int Com_ReadVehicleMode()
//     {
//         return mock_com->Com_ReadVehicleMode();
//     }

//     int Com_ReadwiperRequest()
//     {
//         return mock_com->Com_ReadwiperRequest();
//     }

//     int Com_ReadwasherRequest()
//     {
//         return mock_com->Com_ReadwasherRequest();
//     }

//     void Rte_Write_Washer(wi_mode* ptr)
//     {
//         value = *ptr;
//     }

//     void Rte_Write_Intermittent(wi_mode* ptr)
//     {
//         value = *ptr;
//     }

//     void Rte_Write_Low(wi_mode* ptr)
//     {
//         value = *ptr;
//     }

//     void Rte_Write_High(wi_mode* ptr)
//     {
//         value = *ptr;
//     }
// }

// // -----------------------------------------------------------------------------
// // Test Cases
// // -----------------------------------------------------------------------------

// /*TEST_F(ExtLightTest, test_hazard_light_with_VehicleMode_off)
// {
//     MockComLayer mock;
//     mock_com = &mock;

//     EXPECT_CALL(mock, Com_ReadVehicleMode())
//         .WillOnce(::testing::Return(OFF));

//     EXPECT_CALL(mock, Com_ReadwasherRequest())
//         .WillOnce(::testing::Return(HAZARD_OFF_REQUESTED));

//     EXPECT_CALL(mock, Com_ReadwiperRequest())
//         .Times(1);

//     Direction_MainFunction();

//     EXPECT_EQ(hazardLightcmd, DEACTIVATE_HAZARD);
// }

// // -----------------------------------------------------------------------------

// TEST_F(ExtLightTest, test_hazard_light_with_VehicleMode_acc)
// {
//     MockComLayer mock;
//     mock_com = &mock;

//     EXPECT_CALL(mock, Com_ReadVehicleMode())
//         .WillOnce(::testing::Return(ACC));

//     EXPECT_CALL(mock, Com_ReadwasherRequest())
//         .WillOnce(::testing::Return(HAZARD_ON_REQUESTED));

//     EXPECT_CALL(mock, Com_ReadwiperRequest())
//         .Times(1);

//     Direction_MainFunction();

//     EXPECT_EQ(hazardLightcmd, ACTIVATE_HAZARD);
// }

// // -----------------------------------------------------------------------------

// TEST_F(ExtLightTest, Itest_hazard_light_with_VehicleMode_acc)
// {
//     MockComLayer mock;
//     mock_com = &mock;

//     EXPECT_CALL(mock, Com_ReadVehicleMode())
//         .WillOnce(::testing::Return(ACC));

//     EXPECT_CALL(mock, Com_ReadwasherRequest())
//         .WillOnce(::testing::Return(HAZARD_ON_REQUESTED));

//     EXPECT_CALL(mock, Com_ReadwiperRequest())
//         .Times(1);

//     Direction_InitFunction();
//     Direction_MainFunction();

//     EXPECT_EQ(hazardLightcmd, ACTIVATE_HAZARD);

//     EXPECT_EQ(direction_mode, HAZARD);

//     EXPECT_EQ(value, HAZARD);
// }

// // -----------------------------------------------------------------------------

// TEST_F(ExtLightTest, Itest_DI_LEFT_with_VehicleMode_acc)
// {
//     MockComLayer mock;
//     mock_com = &mock;

//     EXPECT_CALL(mock, Com_ReadVehicleMode())
//         .WillOnce(::testing::Return(ACC));

//     EXPECT_CALL(mock, Com_ReadwasherRequest())
//         .WillOnce(::testing::Return(HAZARD_OFF_REQUESTED));

//     EXPECT_CALL(mock, Com_ReadwiperRequest())
//         .WillOnce(::testing::Return(LEFT_DIRECTION_REQUESTED));

//     Direction_InitFunction();
//     Direction_MainFunction();

//     EXPECT_EQ(hazardLightcmd, DEACTIVATE_HAZARD);

//     EXPECT_EQ(direction_mode, LDI);

//     EXPECT_EQ(value, LDI);
// }

// // -----------------------------------------------------------------------------

// TEST_F(ExtLightTest, Itest_DI_RIGHT_with_VehicleMode_acc)
// {
//     MockComLayer mock;
//     mock_com = &mock;

//     EXPECT_CALL(mock, Com_ReadVehicleMode())
//         .WillOnce(::testing::Return(ACC));

//     EXPECT_CALL(mock, Com_ReadwasherRequest())
//         .WillOnce(::testing::Return(HAZARD_OFF_REQUESTED));

//     EXPECT_CALL(mock, Com_ReadwiperRequest())
//         .WillOnce(::testing::Return(RIGHT_DIRECTION_REQUESTED));

//     Direction_InitFunction();
//     Direction_MainFunction();

//     EXPECT_EQ(hazardLightcmd, DEACTIVATE_HAZARD);

//     EXPECT_EQ(direction_mode, RDI);

//     EXPECT_EQ(value, RDI);
// }

// // -----------------------------------------------------------------------------
// // Main Function
// // -----------------------------------------------------------------------------*/



// int main(int argc, char **argv)
// {
//     testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }




#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "Washer_wiperTests_mock.hpp"
#include "Washer_wiperTests.hpp"

extern "C"
{
    #include "../Washer_wiperCtrl/Washer_wiperCtrl.h"
    #include "../Washer_Hdlr/Washer_Hdlr.h"
    #include "../Wiper_Hdlr/Wiper_Hdlr.h"
}

// Global mock pointer
MockComLayer* mock_com = nullptr;

// Global value holder
wiper_mode value;

// -----------------------------------------------------------------------------
// Mocked C Functions
// -----------------------------------------------------------------------------

extern "C"
{
    int Com_ReadVehicleMode()
    {
        return mock_com->Com_ReadVehicleMode();
    }

    int Com_ReadwiperRequest()
    {
        return mock_com->Com_ReadwiperRequest();
    }

    int Com_ReadwasherRequest()
    {
        return mock_com->Com_ReadwasherRequest();
    }

    void Rte_Write_Washer(wiper_mode* ptr)
    {
        value = *ptr;
    }

    void Rte_Write_Intermittent(wiper_mode* ptr)
    {
        value = *ptr;
    }

    void Rte_Write_Low(wiper_mode* ptr)
    {
        value = *ptr;
    }

    void Rte_Write_High(wiper_mode* ptr)
    {
        value = *ptr;
    }
}

// -----------------------------------------------------------------------------
// Test Fixture
// -----------------------------------------------------------------------------

class WasherWiperTest : public testing::Test
{
protected:
    MockComLayer mock;

    void SetUp() override
    {
        mock_com = &mock;
    }
};

// -----------------------------------------------------------------------------
// Test Cases
// -----------------------------------------------------------------------------

TEST_F(WasherWiperTest, WiperOffMode)
{
    EXPECT_CALL(mock, Com_ReadVehicleMode())
        .WillOnce(::testing::Return(ACC));

    EXPECT_CALL(mock, Com_ReadwiperRequest())
        .WillOnce(::testing::Return(WIPER_OFF_REQUESTED));

    EXPECT_CALL(mock, Com_ReadwasherRequest())
        .WillOnce(::testing::Return(WASHER_OFF));

   // washer_wiper_MainFunction();
      washer_wiper_MainFunction();

    EXPECT_EQ(value, WIPER_OFF);
    //EXPECT_EQ(value, HIGH_WIPER);
}

// -----------------------------------------------------------------------------

TEST_F(WasherWiperTest, IntermittentMode)
{
    EXPECT_CALL(mock, Com_ReadVehicleMode())
        .WillOnce(::testing::Return(ACC));

    EXPECT_CALL(mock, Com_ReadwiperRequest())
        .WillOnce(::testing::Return(INTERMITTENT_WIPER_REQUESTED));

    EXPECT_CALL(mock, Com_ReadwasherRequest())
        .WillOnce(::testing::Return(WASHER_OFF));

    //washer_wiper_MainFunction();
      washer_wiper_MainFunction();

    EXPECT_EQ(value, INTERMITTENT_WIPER);
}

// -----------------------------------------------------------------------------

TEST_F(WasherWiperTest, LowWiperMode)
{
    EXPECT_CALL(mock, Com_ReadVehicleMode())
        .WillOnce(::testing::Return(ACC));

    EXPECT_CALL(mock, Com_ReadwiperRequest())
        .WillOnce(::testing::Return(LOW_WIPER_REQUESTED));

    EXPECT_CALL(mock, Com_ReadwasherRequest())
        .WillOnce(::testing::Return(WASHER_OFF));

   // washer_wiper_MainFunction();
      washer_wiper_MainFunction();

    EXPECT_EQ(value, LOW_WIPER);
}

// -----------------------------------------------------------------------------

TEST_F(WasherWiperTest, HighWiperMode)
{
    EXPECT_CALL(mock, Com_ReadVehicleMode())
        .WillOnce(::testing::Return(ACC));

    EXPECT_CALL(mock, Com_ReadwiperRequest())
        .WillOnce(::testing::Return(HIGH_WIPER_REQUESTED));

    EXPECT_CALL(mock, Com_ReadwasherRequest())
        .WillOnce(::testing::Return(WASHER_OFF));

    //washer_wiper_MainFunction();
      washer_wiper_MainFunction();

    EXPECT_EQ(value, HIGH_WIPER);
}

// -----------------------------------------------------------------------------
// Main
// -----------------------------------------------------------------------------

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
