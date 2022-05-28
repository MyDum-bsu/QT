#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setMaximumHeight(320);
    ui->tabWidget->setCurrentIndex(0);
    setInterfaceStyle();
    int id = QFontDatabase::addApplicationFont(":/n/resources/fonts/Roboto-Medium.ttf");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setInterfaceStyle()
{
    this->setStyleSheet(StyleHelper::getMainWindowStyle());
    ui->aboutButton->setStyleSheet(StyleHelper::getStartButtonsStyle());
    ui->startButton->setStyleSheet(StyleHelper::getStartButtonsStyle());
    ui->leftButton->setStyleSheet(StyleHelper::getLeftButtonActiveStyle());
    ui->rightButton->setStyleSheet(StyleHelper::getRightButtonStyle());
    ui->tabWidget->setStyleSheet(StyleHelper::getTabWidgetStyle());
    ui->tab->setStyleSheet(StyleHelper::getTabStyle());

//    ui->pushButton_0_0->setStyleSheet(StyleHelper::getBlankButtonStyle());
//    ui->pushButton_0_1->setStyleSheet(StyleHelper::getCrossNormalStyle());
//    ui->pushButton_0_2->setStyleSheet(StyleHelper::getCrossVictoryStyle());
//    ui->pushButton_1_0->setStyleSheet(StyleHelper::getCrossLostStyle());

//    ui->pushButton_1_1->setStyleSheet(StyleHelper::getZeroNormalStyle());
//    ui->pushButton_1_2->setStyleSheet(StyleHelper::getZeroVictoryStyle());
//    ui->pushButton_2_0->setStyleSheet(StyleHelper::getZeroLostStyle());
    ui->messageLabel->setStyleSheet(StyleHelper::getVictoryMessageStyle());
    ui->messageLabel->setText("Ходят крестики");
}

void Widget::changeButtonStatus(int num)
{
    if (num == 1) {
        ui->leftButton->setStyleSheet(StyleHelper::getLeftButtonActiveStyle());
        ui->rightButton->setStyleSheet(StyleHelper::getRightButtonStyle());
    } else {
        ui->leftButton->setStyleSheet(StyleHelper::getLeftButtonStyle());
        ui->rightButton->setStyleSheet(StyleHelper::getRightButtonActiveStyle());
    }
}

void Widget::paintEvent(QPaintEvent *event) // для отрисовки background-a
{
    QStyleOption option;
    option.init(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget,&option, &painter, this);
    QWidget::paintEvent(event);
}


void Widget::on_leftButton_clicked()
{
    changeButtonStatus(1);
}


void Widget::on_rightButton_clicked()
{
    changeButtonStatus(2);
}

