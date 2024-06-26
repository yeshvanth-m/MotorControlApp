/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/tempraturescreen_screen/TempratureScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

TempratureScreenViewBase::TempratureScreenViewBase() :
    buttonCallback(this, &TempratureScreenViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    BG.setPosition(0, 0, 480, 272);
    BG.setColor(touchgfx::Color::getColorFromRGB(247, 255, 254));
    add(BG);

    BG_1.setPosition(0, 0, 480, 272);
    BG_1.setColor(touchgfx::Color::getColorFromRGB(247, 255, 254));
    add(BG_1);

    E14.setXY(3, 3);
    E14.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));
    add(E14);

    BackButton.setXY(-40, -2);
    BackButton.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_INACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_INACTIVE_ID));
    BackButton.setAction(buttonCallback);
    add(BackButton);

    MOSFET1_Temp_Guage.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_TINY_BACKGROUNDS_DARK_ID));
    MOSFET1_Temp_Guage.setPosition(32, 136, 120, 120);
    MOSFET1_Temp_Guage.setCenter(60, 60);
    MOSFET1_Temp_Guage.setStartEndAngle(-90, 90);
    MOSFET1_Temp_Guage.setRange(0, 100);
    MOSFET1_Temp_Guage.setValue(0);
    MOSFET1_Temp_Guage.setNeedle(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_TINY_NEEDLES_ROUGH_ID, 5, 33);
    MOSFET1_Temp_Guage.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    MOSFET1_Temp_Guage.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    add(MOSFET1_Temp_Guage);

    MOSFET2_Temp_Guage.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_TINY_BACKGROUNDS_DARK_ID));
    MOSFET2_Temp_Guage.setPosition(180, 136, 120, 120);
    MOSFET2_Temp_Guage.setCenter(60, 60);
    MOSFET2_Temp_Guage.setStartEndAngle(-90, 90);
    MOSFET2_Temp_Guage.setRange(0, 100);
    MOSFET2_Temp_Guage.setValue(0);
    MOSFET2_Temp_Guage.setNeedle(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_TINY_NEEDLES_ROUGH_ID, 5, 33);
    MOSFET2_Temp_Guage.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    MOSFET2_Temp_Guage.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    add(MOSFET2_Temp_Guage);

    MOSFET3_Temp_Guage.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_TINY_BACKGROUNDS_DARK_ID));
    MOSFET3_Temp_Guage.setPosition(327, 136, 120, 120);
    MOSFET3_Temp_Guage.setCenter(60, 60);
    MOSFET3_Temp_Guage.setStartEndAngle(-90, 90);
    MOSFET3_Temp_Guage.setRange(0, 100);
    MOSFET3_Temp_Guage.setValue(0);
    MOSFET3_Temp_Guage.setNeedle(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_TINY_NEEDLES_ROUGH_ID, 5, 33);
    MOSFET3_Temp_Guage.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    MOSFET3_Temp_Guage.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    add(MOSFET3_Temp_Guage);

    MOSFET1_Temp_Value.setPosition(73, 213, 39, 20);
    MOSFET1_Temp_Value.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    MOSFET1_Temp_Value.setLinespacing(0);
    Unicode::snprintf(MOSFET1_Temp_ValueBuffer, MOSFET1_TEMP_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_K1JJ).getText());
    MOSFET1_Temp_Value.setWildcard(MOSFET1_Temp_ValueBuffer);
    MOSFET1_Temp_Value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_04K0));
    add(MOSFET1_Temp_Value);

    MOSFET2_Temp_Value.setPosition(218, 212, 45, 21);
    MOSFET2_Temp_Value.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    MOSFET2_Temp_Value.setLinespacing(0);
    Unicode::snprintf(MOSFET2_Temp_ValueBuffer, MOSFET2_TEMP_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_ABWZ).getText());
    MOSFET2_Temp_Value.setWildcard(MOSFET2_Temp_ValueBuffer);
    MOSFET2_Temp_Value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3F2C));
    add(MOSFET2_Temp_Value);

    MOSFET3_Temp_Value.setPosition(367, 213, 41, 20);
    MOSFET3_Temp_Value.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    MOSFET3_Temp_Value.setLinespacing(0);
    Unicode::snprintf(MOSFET3_Temp_ValueBuffer, MOSFET3_TEMP_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_HJC5).getText());
    MOSFET3_Temp_Value.setWildcard(MOSFET3_Temp_ValueBuffer);
    MOSFET3_Temp_Value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_M6ER));
    add(MOSFET3_Temp_Value);

    MCU_Temp_Text.setXY(221, 9);
    MCU_Temp_Text.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    MCU_Temp_Text.setLinespacing(0);
    MCU_Temp_Text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CXW6));
    add(MCU_Temp_Text);

    MOSFET_Temp_Text.setXY(78, 101);
    MOSFET_Temp_Text.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    MOSFET_Temp_Text.setLinespacing(0);
    MOSFET_Temp_Text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KEZ1));
    add(MOSFET_Temp_Text);

    MCU_Temp_Guage.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_TINY_BACKGROUNDS_LIGHT_ID));
    MCU_Temp_Guage.setPosition(327, 9, 120, 120);
    MCU_Temp_Guage.setCenter(60, 60);
    MCU_Temp_Guage.setStartEndAngle(-90, 90);
    MCU_Temp_Guage.setRange(0, 100);
    MCU_Temp_Guage.setValue(0);
    MCU_Temp_Guage.setNeedle(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_TINY_NEEDLES_ROUGH_ID, 5, 33);
    MCU_Temp_Guage.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    MCU_Temp_Guage.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    add(MCU_Temp_Guage);

    MCU_Temp.setPosition(366, 81, 42, 20);
    MCU_Temp.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    MCU_Temp.setLinespacing(0);
    Unicode::snprintf(MCU_TempBuffer, MCU_TEMP_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_THNU).getText());
    MCU_Temp.setWildcard(MCU_TempBuffer);
    MCU_Temp.setTypedText(touchgfx::TypedText(T___SINGLEUSE_7WW3));
    add(MCU_Temp);
}

TempratureScreenViewBase::~TempratureScreenViewBase()
{

}

void TempratureScreenViewBase::setupScreen()
{

}

void TempratureScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &BackButton)
    {
        //Interaction1
        //When BackButton clicked change screen to MotorControlScreen
        //Go to MotorControlScreen with screen transition towards South
        application().gotoMotorControlScreenScreenSlideTransitionSouth();
    }
}
