#include "stylehelper.h"


QString StyleHelper::getMainWindowStyle()
{
    return "QWidget{"
           "background-image: url(:/n/resources/images/bg.png);"
           "}";
}

QString StyleHelper::getStartButtonsStyle()
{
    return "QPushButton{"
           "    color:#fff;"
           "background: none;"
           "border: none;"
           "border-radius:19px;"
           " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.955, stop:0 rgba(89, 156, 208, 255), stop:1 rgba(65, 118, 184, 255));"
           "font-family: 'Roboto-medium';"
           "font-size:16px;"
           "}"
           "QPushButton::hover{"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.889055, y2:0.92, stop:0.221106 rgba(79, 159, 255, 255), stop:1 rgba(153, 193, 241, 255));"
           "}"
           "QPushButtom::pressed{"
           " background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.955, stop:0 rgba(89, 156, 208, 255), stop:1 rgba(65, 118, 184, 255));"
           "}";
}

QString StyleHelper::getLeftButtonStyle()
{
    return "QPushButton{"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.110553 rgba(94, 92, 100, 255), stop:0.904523 rgba(61, 56, 70, 255));"
           "background-image: url(:/n/resources/images/cross_small.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "border:1px solid #333;"
           "border-top-left-radius:5px;"
           "border-bottom-left-radius:5px;"
           "}";
}

QString StyleHelper::getRightButtonStyle()
{
    return "QPushButton{"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.110553 rgba(94, 92, 100, 255), stop:0.904523 rgba(61, 56, 70, 255));"
           "background-image: url(:/n/resources/images/zero_small.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "border:1px solid #333;"
           "border-left: none;"
           "border-top-right-radius:5px;"
           "border-bottom-right-radius:5px;"
           "}";
}

QString StyleHelper::getLeftButtonActiveStyle()
{
    return "QPushButton{"
           "background-color: #2d313b;"
           "background-image: url(:/n/resources/images/cross_small.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "border:1px solid #333;"
           "border-top-left-radius:5px;"
           "border-bottom-left-radius:5px;"
           "}";
}

QString StyleHelper::getRightButtonActiveStyle()
{
    return "QPushButton{"
           "background-color: #2d313b;"
           "background-image: url(:/n/resources/images/zero_small.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "border:1px solid #333;"
           "border-left: none;"
           "border-top-right-radius:5px;"
           "border-bottom-right-radius:5px;"
           "}";
}

QString StyleHelper::getTabWidgetStyle()
{
    return "QTabWidget{"
            "border: none;"
        "}"
        "QTabWidget::pane {"
            "border: 1px solid #222;"
            "border-radius:3px;"
        "}";
}

QString StyleHelper::getTabStyle()
{
    return "QWidget#tab{"
            "background: rgb(33, 40, 50);"
           "}";
}

QString StyleHelper::getBlankButtonStyle()
{
    return "QPushButton{"
           "border:none;"
           "background: #171D29;"
           "}"
           "QPushButton::hover{"
           "background: #373D49;"
           "}";
}

QString StyleHelper::getCrossNormalStyle()
{
    return "QPushButton{"
           "border:none;"
           "background: #171D29 url(:/n/resources/images/cross_large.png) no-repeat center center;"
           "}"
           "QPushButton::hover{"
           "background-color: #373D49;"
           "}";
}

QString StyleHelper::getCrossVictoryStyle()
{
    return "QPushButton{"
           "border:none;"
           "background-color: #20301B;"
           "background-image: url(:/n/resources/images/cross_large.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "}";
}

QString StyleHelper::getCrossLostStyle()
{
    return "QPushButton{"
           "border:none;"
           "background-color: #7F1F8C;"
           "background-image: url(:/n/resources/images/cross_large.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "}";
}

QString StyleHelper::getZeroNormalStyle()
{
    return "QPushButton{"
           "border:none;"
           "background: #171D29 url(:/n/resources/images/zero_large.png) no-repeat center center;"
           "}"
           "QPushButton::hover{"
           "background-color: #373D49;"
           "}";
}

QString StyleHelper::getZeroVictoryStyle()
{
    return "QPushButton{"
           "border:none;"
           "background-color: #20301B;"
           "background-image: url(:/n/resources/images/zero_large.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "}";
}

QString StyleHelper::getZeroLostStyle()
{
    return "QPushButton{"
           "border:none;"
           "background-color: #7F1F8C;"
           "background-image: url(:/n/resources/images/zero_large.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "}";
}

QString StyleHelper::getNormalMessageStyle()
{
    return "QLabel{"
           "font-family: 'Roboto Medium';"
           "font-size:12px;"
           "background:none;"
           "color:#ffffff;"
           "}";
}

QString StyleHelper::getVictoryMessageStyle()
{
    return "QLabel{"
           "font-family: 'Roboto Medium';"
           "font-size:12px;"
           "background:#055902;"
           "border:1px solid #1C7C32"
           "color:#ffffff;"
           "}";
}

QString StyleHelper::getLostMessageStyle()
{
    return "QLabel{"
           "font-family: 'Roboto Medium';"
           "font-size:12px;"
           "background:#961F99;"
           "border:1px solid #E237F5"
           "color:#ffffff;"
           "}";
}
