#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setPic(QString a)
{
    QPixmap pic = QPixmap();
        if(pic.load(a)){
            std::cout << currentImage;
            pic = pic.scaled(ui->label->size(), Qt::KeepAspectRatio);
            ui->label->setPixmap(pic);
        }
        else{
            std::cout << "Eror" << std::endl;
        }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left){
        std::cout << "left" << std :: endl;
        currentImage --;
        if (currentImage < 0){
            currentImage = 9;
        }
        setPic(image [currentImage]);

    }
    else if(event->key() == Qt::Key_Right){
        std::cout << "right" << std :: endl;
        currentImage ++;
        if (currentImage > 9){
            currentImage = 0;
        }
        setPic(image [currentImage]);
    }
    else if(event->key() == Qt::Key_Up){
        std::cout << "up" << std :: endl;
        currentImage ++;
        if (currentImage > 9){
            currentImage = 0;
        }
        setPic(image [currentImage]);
    }
    else if(event->key() == Qt::Key_Down){
        std::cout << "down" << std :: endl;
        currentImage --;
        if (currentImage < 0){
            currentImage = 9;
        }
        setPic(image [currentImage]);
    }
}
