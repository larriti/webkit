#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->webView->load(QUrl("file:///home/wangxian/Code/qt5.5/QWebFrame/gaodemap/gaode/index.html"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
