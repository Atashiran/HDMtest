#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    testGitFunction();

    /// برنچ myhamed
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::testGitFunction()
{
    qDebug() << "این تابع برای تست Git ساخته شده است";
}



