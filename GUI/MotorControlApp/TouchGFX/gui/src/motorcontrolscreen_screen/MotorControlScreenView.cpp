#include <gui/motorcontrolscreen_screen/MotorControlScreenView.hpp>
#include <touchgfx/Color.hpp>
#include "main.h"

extern rotation_ctrl_t  rot_ctrl;
extern rotation_stats_t rot_stats;
extern temp_stats_t     temp_stats;
extern bool 			updateRxStats;

MotorControlScreenView::MotorControlScreenView():
	sliderValueStartedChangeCallback(this, &MotorControlScreenView::sliderValueStartedChangeCallbackHandler),
    sliderValueChangedCallback(this, &MotorControlScreenView::sliderValueChangedCallbackHandler),
    sliderValueConfirmedCallback(this, &MotorControlScreenView::sliderValueConfirmedCallbackHandler)
{
	M1_RPM_Slider.setValue(rot_ctrl.RPM_M1);
	M2_RPM_Slider.setValue(rot_ctrl.RPM_M2);
	M3_RPM_Slider.setValue(rot_ctrl.RPM_M3);
}

void MotorControlScreenView::setupScreen()
{
    MotorControlScreenViewBase::setupScreen();
    M1_RPM_Slider.setStartValueCallback(sliderValueStartedChangeCallback);
    M1_RPM_Slider.setNewValueCallback(sliderValueChangedCallback);
    M1_RPM_Slider.setStopValueCallback(sliderValueConfirmedCallback);
    M2_RPM_Slider.setStartValueCallback(sliderValueStartedChangeCallback);
	M2_RPM_Slider.setNewValueCallback(sliderValueChangedCallback);
	M2_RPM_Slider.setStopValueCallback(sliderValueConfirmedCallback);
	M3_RPM_Slider.setStartValueCallback(sliderValueStartedChangeCallback);
	M3_RPM_Slider.setNewValueCallback(sliderValueChangedCallback);
	M3_RPM_Slider.setStopValueCallback(sliderValueConfirmedCallback);
}

void MotorControlScreenView::tearDownScreen()
{
    MotorControlScreenViewBase::tearDownScreen();
}

void MotorControlScreenView::sliderValueStartedChangeCallbackHandler(const touchgfx::Slider& src, int value)
{
	if (&src == &M1_RPM_Slider)
	{
		//execute code whenever the slider stops the changing value.
		if (value != 0)
		{
			rot_ctrl.RPM_M1 = value;
			rot_ctrl.Ctrl_M1 = true;
		}
		else
		{
			rot_ctrl.RPM_M1 = 0;
			rot_ctrl.Ctrl_M1 = false;
		}
	}
	else if (&src == &M2_RPM_Slider)
	{
		//execute code whenever the slider stops changing value.
		if (value != 0)
		{
			rot_ctrl.RPM_M2 = value;
			rot_ctrl.Ctrl_M2 = true;
		}
		else
		{
			rot_ctrl.RPM_M2 = 0;
			rot_ctrl.Ctrl_M2 = false;
		}
	}
	else if (&src == &M3_RPM_Slider)
	{
		//execute code whenever the slider stops changing value.
		if (value != 0)
		{
			rot_ctrl.RPM_M3 = value;
			rot_ctrl.Ctrl_M3 = true;
		}
		else
		{
			rot_ctrl.RPM_M3 = 0;
			rot_ctrl.Ctrl_M3 = false;
		}
	}
}

void MotorControlScreenView::sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value)
{
	if (&src == &M1_RPM_Slider)
	{
		//execute code whenever the slider stops the changing value.
		if (value != 0)
		{
			rot_ctrl.RPM_M1 = value;
			rot_ctrl.Ctrl_M1 = true;
		}
		else
		{
			rot_ctrl.RPM_M1 = 0;
			rot_ctrl.Ctrl_M1 = false;
		}
	}
	else if (&src == &M2_RPM_Slider)
	{
		//execute code whenever the slider stops changing value.
		if (value != 0)
		{
			rot_ctrl.RPM_M2 = value;
			rot_ctrl.Ctrl_M2 = true;
		}
		else
		{
			rot_ctrl.RPM_M2 = 0;
			rot_ctrl.Ctrl_M2 = false;
		}
	}
	else if (&src == &M3_RPM_Slider)
	{
		//execute code whenever the slider stops changing value.
		if (value != 0)
		{
			rot_ctrl.RPM_M3 = value;
			rot_ctrl.Ctrl_M3 = true;
		}
		else
		{
			rot_ctrl.RPM_M3 = 0;
			rot_ctrl.Ctrl_M3 = false;
		}
	}
}

void MotorControlScreenView::sliderValueConfirmedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &M1_RPM_Slider)
    {
        //execute code whenever the slider stops the changing value.
    	if (value != 0)
    	{
    		rot_ctrl.RPM_M1 = value;
    		rot_ctrl.Ctrl_M1 = true;
    	}
    	else
    	{
    		rot_ctrl.RPM_M1 = 0;
    		rot_ctrl.Ctrl_M1 = false;
    	}
    }
    else if (&src == &M2_RPM_Slider)
	{
		//execute code whenever the slider stops changing value.
    	if (value != 0)
    	{
    		rot_ctrl.RPM_M2 = value;
    		rot_ctrl.Ctrl_M2 = true;
    	}
    	else
    	{
    		rot_ctrl.RPM_M2 = 0;
    		rot_ctrl.Ctrl_M2 = false;
    	}
	}
	else if (&src == &M3_RPM_Slider)
	{
		//execute code whenever the slider stops changing value.
    	if (value != 0)
    	{
    		rot_ctrl.RPM_M3 = value;
    		rot_ctrl.Ctrl_M3 = true;
    	}
    	else
    	{
    		rot_ctrl.RPM_M3 = 0;
    		rot_ctrl.Ctrl_M3 = false;
    	}
	}
}

void MotorControlScreenView::ClearFault_1()
{
	rot_ctrl.ClrFault_M1 = true;
}

void MotorControlScreenView::ClearFault_2()
{
	rot_ctrl.ClrFault_M2 = true;
}

void MotorControlScreenView::ClearFault_3()
{
	rot_ctrl.ClrFault_M3 = true;
}


void MotorControlScreenView::handleTickEvent ()
{
	if (updateRxStats)
	{
		M1_RPM_Guage.setValue(rot_stats.RPM_M1);
		M2_RPM_Guage.setValue(rot_stats.RPM_M2);
		M3_RPM_Guage.setValue(rot_stats.RPM_M3);

		if (rot_stats.Fault_M1)
		{
			Fault1_IndicatorPainter.setColor(touchgfx::Color::getColorFromRGB(190, 34, 43));
		}
		else
		{
			Fault1_IndicatorPainter.setColor(touchgfx::Color::getColorFromRGB(33, 184, 43));
		}

		if (rot_stats.Fault_M2)
		{
			Fault2_IndicatorPainter.setColor(touchgfx::Color::getColorFromRGB(190, 34, 43));
		}
		else
		{
			Fault2_IndicatorPainter.setColor(touchgfx::Color::getColorFromRGB(33, 184, 43));
		}

		if (rot_stats.Fault_M3)
		{
			Fault3_IndicatorPainter.setColor(touchgfx::Color::getColorFromRGB(190, 34, 43));
		}
		else
		{
			Fault3_IndicatorPainter.setColor(touchgfx::Color::getColorFromRGB(33, 184, 43));
		}

		Fault1_Indicator.setPainter(Fault1_IndicatorPainter);
		Fault2_Indicator.setPainter(Fault2_IndicatorPainter);
		Fault3_Indicator.setPainter(Fault3_IndicatorPainter);

		Fault1_Indicator.invalidate();
		Fault2_Indicator.invalidate();
		Fault3_Indicator.invalidate();

		updateRxStats = false;
	}
}
