#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTabBar>
#include <QPainter>
#include <QStyleOption>
#include <QFontDatabase>
#include "stylehelper.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    void setInterfaceStyle();
    void changeButtonStatus(int num);
protected:
    void paintEvent(QPaintEvent* event);
private slots:
    void on_leftButton_clicked();
    void on_rightButton_clicked();
};
#endif // WIDGET_H
