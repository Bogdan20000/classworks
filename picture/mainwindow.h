#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setPic(QString a);
    void keyPressEvent(QKeyEvent *event);
    QString image [10] = {
        "C://Users//Admin//Desktop//QT_QT_QT_QT//3276bbc8f0271d698aeda63f38844857.jpg",
        "C://Users//Admin//Desktop//QT_QT_QT_QT//1402471536_prikoly-6.jpg",
        "C://Users//Admin//Desktop//QT_QT_QT_QT//1459849923_prikol-1.jpg",
        "C://Users//Admin//Desktop//QT_QT_QT_QT//1470283727_001_4.jpg",
        "C://Users//Admin//Desktop//QT_QT_QT_QT//152027388416666899.jpg",
        "C://Users//Admin//Desktop//QT_QT_QT_QT//images (1).jpg",
        "C://Users//Admin//Desktop//QT_QT_QT_QT//images (2).jpg",
        "C://Users//Admin//Desktop//QT_QT_QT_QT//images.jpg",
        "C://Users//Admin//Desktop//QT_QT_QT_QT//kartinki-s-nadpisjami-3_tumb_660.jpg",
        "C://Users//Admin//Desktop//QT_QT_QT_QT//завантаження.jpg"
    };
    int currentImage = 0;
    int numOfImages = 9;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
