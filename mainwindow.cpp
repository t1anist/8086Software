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
    connect(welDialog,&WelcomeDialog::newPage,this,&MainWindow::openNewPage);
    connect(welDialog,&WelcomeDialog::openFile,this,&MainWindow::openFile);
}

MainWindow::~MainWindow()
{
    delete ui;
}

