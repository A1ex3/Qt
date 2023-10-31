#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int a = ui->lineEdit->text().toInt();
    int b = ui->lineEdit_2->text().toInt();

    QStringList list = {"+","-","*","/"};
    ui->comboBox->addItems(list);

   for(int i=0;i<=list.length();i++)
   {
       if (list[i] == "+")
       {
            ui->label->setText(QString::number(a+b));
            break;
       }
       else if(list[i] == "-")
       {
           ui->label->setText(QString::number(a-b));
           break;
       }
       else if(list[i] == "*")
       {
           ui->label->setText(QString::number(a*b));
           break;
       }
       else if(list[i] == "/")
       {
           ui->label->setText(QString::number(a/b));
           break;
       }
       else
       {
           ui->label->setText(QString::number(0));
       }
   }

}
