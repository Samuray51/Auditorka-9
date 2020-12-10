#include "widget.h"
#include "ui_widget.h"

#include<math.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

int A = 0;

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter *paint=new QPainter(this);



    if(ui->radioButton->isChecked())
    {
        paint->setPen(Qt::red);
        paint->setBrush(QBrush(Qt::red, Qt::SolidPattern));
        paint->drawEllipse(500,50,200,200);

    }
    else if(ui->radioButton_2->isChecked())
    {
        paint->setPen(Qt::blue);
        paint->setBrush(QBrush(Qt::blue, Qt::SolidPattern));
        paint->drawEllipse(500,50,200,200);
    }
    else if(ui->radioButton_3->isChecked())
    {
        paint->setPen(Qt::green);
        paint->setBrush(QBrush(Qt::green, Qt::SolidPattern));
        paint->drawEllipse(500,50,200,200);
    }
    else
    {
        paint->setPen(Qt::white);
        paint->setBrush(QBrush(Qt::white, Qt::SolidPattern));
        paint->drawEllipse(500,50,200,200);
    }





    if(A==1)
    {
        ui->pushButton->hide();
        paint->setPen(Qt::yellow);
        paint->setBrush(QBrush(Qt::yellow, Qt::SolidPattern));
        paint->drawEllipse(75,75,50,50);
        int x=0,y, r=10000;
        for (x;x<=200;x=x+5)
        {
            y=sqrt(r-pow(x-100,2))+100;
            paint->drawLine(100,100,x,y);
            y=-sqrt(r-pow(x-100,2))+100;
            paint->drawLine(100,100,x,y);
        }
        y=0;
        for (y;y<=200;y=y+5)
        {
            x=sqrt(r-pow(y-100,2))+100;
            paint->drawLine(100,100,x,y);
            x=-sqrt(r-pow(y-100,2))+100;
            paint->drawLine(100,100,x,y);
        }

    }
    else
    {
        paint->setPen(Qt::yellow);
        paint->setBrush(QBrush(Qt::yellow, Qt::SolidPattern));
        paint->drawEllipse(75,75,50,50);
    }
}

void Widget::on_pushButton_clicked()
{
    A=1;
    repaint();
}


void Widget::on_radioButton_toggled(bool checked)
{
     repaint();
}

void Widget::on_radioButton_2_toggled(bool checked)
{
     repaint();
}

void Widget::on_radioButton_3_toggled(bool checked)
{
     repaint();
}
