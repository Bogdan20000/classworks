#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <ctime>
#include <QFileDialog>
#include <QDebug>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand(time(NULL));
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_generate_new_number_clicked()
{
    int from = ui->from->value();
    int to = ui->to->value();
    int random_number;
    random_number = (rand() %( to - from + 1))+from;
    QString random = QString::number(random_number);
    ui->Show_number->setText(random);
}

void MainWindow::on_Save_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                               "C:\\Users\\Admin\\Desktop\\Programs",
                               tr("Images (*.txt)"));
    qDebug() << fileName;
    QFile file(fileName);
    file.open(QIODevice::ReadWrite);
    QTextStream stream(&file);
    stream << ui->Show_number->text();
    file.close();
}
