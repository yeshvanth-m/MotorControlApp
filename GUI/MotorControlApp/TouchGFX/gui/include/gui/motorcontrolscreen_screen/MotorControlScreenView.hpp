#ifndef MOTORCONTROLSCREENVIEW_HPP
#define MOTORCONTROLSCREENVIEW_HPP

#include <gui_generated/motorcontrolscreen_screen/MotorControlScreenViewBase.hpp>
#include <gui/motorcontrolscreen_screen/MotorControlScreenPresenter.hpp>

class MotorControlScreenView : public MotorControlScreenViewBase
{
public:
    MotorControlScreenView();
    virtual ~MotorControlScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
    /*
	 * Callback Declarations
	 */
	touchgfx::Callback<MotorControlScreenView, const touchgfx::Slider&, int> sliderValueStartedChangeCallback;
	touchgfx::Callback<MotorControlScreenView, const touchgfx::Slider&, int> sliderValueChangedCallback;
	touchgfx::Callback<MotorControlScreenView, const touchgfx::Slider&, int> sliderValueConfirmedCallback;

	/*
	 * Callback Handler Declarations
	 */
	void sliderValueStartedChangeCallbackHandler(const touchgfx::Slider& src, int value);
	void sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value);
	void sliderValueConfirmedCallbackHandler(const touchgfx::Slider& src, int value);

};

#endif // MOTORCONTROLSCREENVIEW_HPP
