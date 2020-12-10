#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPainter>
#include<QPaintEvent>
#include<QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
     void paintEvent(QPaintEvent *event);
private slots:
     void on_pushButton_clicked();

     void on_radioButton_toggled(bool checked);

     void on_radioButton_2_toggled(bool checked);

     void on_radioButton_3_toggled(bool checked);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
