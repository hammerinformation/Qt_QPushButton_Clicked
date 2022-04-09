#include "widget.h"
#include "./ui_widget.h"
#include <QPushButton>
#include <QDebug>

void clicked(){
qDebug("clicked") ;
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QPushButton* myButton=new QPushButton("Click",this);
    myButton->move(5,5);
    connect(myButton,&QPushButton::clicked,clicked);
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

