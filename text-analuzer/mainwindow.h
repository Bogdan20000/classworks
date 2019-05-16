#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "textanaluzer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    textanaluzer TextanAnaluzer;

private slots:
    void on_numOfSymbols_clicked();

    void on_numOfLetters_clicked();

    void on_numOfWords_clicked();

    void on_equals_clicked();

    void on_refresh_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
