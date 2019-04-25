#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setPic();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setPic()
{
    QPixmap pic = QPixmap();
    if(pic.load("C:\\Users\\Admin\\Desktop\\1459849923_prikol-1.jpg")){
        pic = pic.scaled(ui->label->size(), Qt::KeepAspectRatio);
        ui->label->setPixmap(pic);
    }
    else{
        std::cout << "fail";
    }
    if(pic.load("C:\\Users\\Admin\\Desktop\\152027388416666899.jpg")){
        pic = pic.scaled(ui->label_2->size(), Qt::KeepAspectRatio);
        ui->label_2->setPixmap(pic);
    }
    else{
        std::cout << "fail";
    }
    if(pic.load("C:\\Users\\Admin\\Desktop\\images.jpg")){
        pic = pic.scaled(ui->label_3->size(), Qt::KeepAspectRatio);
        ui->label_3->setPixmap(pic);
    }
    else{
        std::cout << "fail";
    }
    if(pic.load("C:\\Users\\Admin\\Desktop\\images (1).jpg")){
        pic = pic.scaled(ui->label_4->size(), Qt::KeepAspectRatio);
        ui->label_4->setPixmap(pic);
    }
    else{
        std::cout << "fail";
    }
    if(pic.load("C:\\Users\\Admin\\Desktop\\1402471536_prikoly-6.jpg")){
        pic = pic.scaled(ui->label_5->size(), Qt::KeepAspectRatio);
        ui->label_5->setPixmap(pic);
    }
    else{
        std::cout << "fail";
    }
    if(pic.load("C:\\Users\\Admin\\Desktop\\images (2).jpg")){
        pic = pic.scaled(ui->label_6->size(), Qt::KeepAspectRatio);
        ui->label_6->setPixmap(pic);
    }
    else{
        std::cout << "fail";
    }
    if(pic.load("C:\\Users\\Admin\\Desktop\\1470283727_001_4.jpg")){
        pic = pic.scaled(ui->label_7->size(), Qt::KeepAspectRatio);
        ui->label_7->setPixmap(pic);
    }
    else{
        std::cout << "fail";
    }
    if(pic.load("C:\\Users\\Admin\\Desktop\\3276bbc8f0271d698aeda63f38844857.jpg")){
        pic = pic.scaled(ui->label_8->size(), Qt::KeepAspectRatio);
        ui->label_8->setPixmap(pic);
    }
    else{
        std::cout << "fail";
    }
    if(pic.load("C:\\Users\\Admin\\Desktop\\kartinki-s-nadpisjami-3_tumb_660.jpg")){
        pic = pic.scaled(ui->label_9->size(), Qt::KeepAspectRatio);
        ui->label_9->setPixmap(pic);
    }
    else{
        std::cout << "fail";
    }
}
