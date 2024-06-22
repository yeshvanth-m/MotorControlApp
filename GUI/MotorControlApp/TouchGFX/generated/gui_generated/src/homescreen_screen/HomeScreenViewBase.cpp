/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/homescreen_screen/HomeScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

HomeScreenViewBase::HomeScreenViewBase() :
    buttonCallback(this, &HomeScreenViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    Background.setXY(0, 0);
    Background.setBitmap(touchgfx::Bitmap(BITMAP_COVERPAGE_ID));
    add(Background);

    Start.setXY(31, 153);
    Start.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_SMALL_ROUND_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_SMALL_ROUND_PRESSED_ID));
    Start.setLabelText(touchgfx::TypedText(T___SINGLEUSE_ZJBP));
    Start.setLabelColor(touchgfx::Color::getColorFromRGB(0, 123, 255));
    Start.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Start.setAction(buttonCallback);
    add(Start);
}

HomeScreenViewBase::~HomeScreenViewBase()
{

}

void HomeScreenViewBase::setupScreen()
{

}

void HomeScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &Start)
    {
        //Interaction1
        //When Start clicked change screen to MotorControlScreen
        //Go to MotorControlScreen with screen transition towards North
        application().gotoMotorControlScreenScreenSlideTransitionNorth();
    }
}