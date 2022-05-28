#ifndef STYLEHELPER_H
#define STYLEHELPER_H

#include <QString>

class StyleHelper
{
public:
    StyleHelper();
    static QString getMainWindowStyle();
    static QString getStartButtonsStyle();
    static QString getLeftButtonStyle();
    static QString getRightButtonStyle();
    static QString getLeftButtonActiveStyle();
    static QString getRightButtonActiveStyle();
    static QString getTabWidgetStyle();
    static QString getTabStyle();

    static QString getBlankButtonStyle();
    static QString getCrossNormalStyle();
    static QString getCrossVictoryStyle();
    static QString getCrossLostStyle();
    static QString getZeroNormalStyle();
    static QString getZeroVictoryStyle();
    static QString getZeroLostStyle();

    static QString getNormalMessageStyle();
    static QString getVictoryMessageStyle();
    static QString getLostMessageStyle();
};

#endif // STYLEHELPER_H
