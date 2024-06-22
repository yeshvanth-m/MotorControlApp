#ifndef TEMPRATURESCREENPRESENTER_HPP
#define TEMPRATURESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class TempratureScreenView;

class TempratureScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    TempratureScreenPresenter(TempratureScreenView& v);

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

    virtual ~TempratureScreenPresenter() {}

private:
    TempratureScreenPresenter();

    TempratureScreenView& view;
};

#endif // TEMPRATURESCREENPRESENTER_HPP
