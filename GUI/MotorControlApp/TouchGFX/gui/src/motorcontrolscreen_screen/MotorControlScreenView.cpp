#include <gui/motorcontrolscreen_screen/MotorControlScreenView.hpp>

MotorControlScreenView::MotorControlScreenView():
	sliderValueStartedChangeCallback(this, &MotorControlScreenView::sliderValueStartedChangeCallbackHandler),
    sliderValueChangedCallback(this, &MotorControlScreenView::sliderValueChangedCallbackHandler),
    sliderValueConfirmedCallback(this, &MotorControlScreenView::sliderValueConfirmedCallbackHandler)
{

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
        //execute code whenever the slider starts changing value.
    }
}

void MotorControlScreenView::sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &M1_RPM_Slider)
    {
        //execute code whenever the value of the slider changes.
    }
}

void MotorControlScreenView::sliderValueConfirmedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &M1_RPM_Slider)
    {
        //execute code whenever the slider stops the changing value.
    }
}
