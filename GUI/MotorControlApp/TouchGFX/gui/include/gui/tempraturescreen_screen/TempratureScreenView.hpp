#ifndef TEMPRATURESCREENVIEW_HPP
#define TEMPRATURESCREENVIEW_HPP

#include <gui_generated/tempraturescreen_screen/TempratureScreenViewBase.hpp>
#include <gui/tempraturescreen_screen/TempratureScreenPresenter.hpp>

class TempratureScreenView : public TempratureScreenViewBase
{
public:
    TempratureScreenView();
    virtual ~TempratureScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TEMPRATURESCREENVIEW_HPP
