#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_numOfSymbols_clicked()
{

}

void MainWindow::on_numOfLetters_clicked()
{

}

void MainWindow::on_numOfWords_clicked()
{

}

void MainWindow::on_equals_clicked()
{

}

void MainWindow::on_refresh_clicked()
{
    QString text = ui->in->toPlainText();
    string Text = text.toStdString();
    TextanAnaluzer.setText(Text);
    int a = TextanAnaluzer.getSymbolsCount();
    int b = TextanAnaluzer.getlettersCount();
    int c = TextanAnaluzer.getWordsCount();
    int d = TextanAnaluzer.getSentencesCount();
    QString e = QString::number(a);
    QString f = QString::number(b);
    QString g = QString::number(c);
    QString h = QString::number(d);
    ui->Letters->setText(e);
    ui->Sentenses->setText(f);
    ui->Symbols->setText(g);
    ui->Words->setText(h);
}
