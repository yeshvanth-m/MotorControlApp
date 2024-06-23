#include <gui/tempraturescreen_screen/TempratureScreenView.hpp>
#include "main.h"

extern temp_stats_t     temp_stats;
extern bool 			updateRxStats;

TempratureScreenView::TempratureScreenView()
{

}

void TempratureScreenView::setupScreen()
{
    TempratureScreenViewBase::setupScreen();
}

void TempratureScreenView::tearDownScreen()
{
    TempratureScreenViewBase::tearDownScreen();
}

void TempratureScreenView::handleTickEvent ()
{
	if (updateRxStats)
	{
		MOSFET1_Temp_Guage.setValue(temp_stats.T_M1);
		MOSFET2_Temp_Guage.setValue(temp_stats.T_M2);
		MOSFET3_Temp_Guage.setValue(temp_stats.T_M3);
		MCU_Temp_Guage.setValue(temp_stats.T_Chip);

		Unicode::snprintf(MCU_TempBuffer, MCU_TEMP_SIZE, "%d", temp_stats.T_Chip);
		Unicode::snprintf(MOSFET1_Temp_ValueBuffer, MOSFET1_TEMP_VALUE_SIZE, "%d", temp_stats.T_M1);
		Unicode::snprintf(MOSFET2_Temp_ValueBuffer, MOSFET2_TEMP_VALUE_SIZE, "%d", temp_stats.T_M2);
		Unicode::snprintf(MOSFET3_Temp_ValueBuffer, MOSFET3_TEMP_VALUE_SIZE, "%d", temp_stats.T_M3);

		MCU_Temp.invalidate();
		MOSFET1_Temp_Value.invalidate();
		MOSFET2_Temp_Value.invalidate();
		MOSFET3_Temp_Value.invalidate();

		updateRxStats = false;
	}
}
