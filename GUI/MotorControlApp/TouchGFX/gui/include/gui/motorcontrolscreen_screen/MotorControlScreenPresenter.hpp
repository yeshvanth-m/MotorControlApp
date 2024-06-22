#ifndef MOTORCONTROLSCREENPRESENTER_HPP
#define MOTORCONTROLSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class MotorControlScreenView;

class MotorControlScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    MotorControlScreenPresenter(MotorControlScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~MotorControlScreenPresenter() {}

private:
    MotorControlScreenPresenter();

    MotorControlScreenView& view;
};

#endif // MOTORCONTROLSCREENPRESENTER_HPP
