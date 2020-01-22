#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->welDialog = new WelcomeDialog(this);
    this->show();
    welDialog->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

