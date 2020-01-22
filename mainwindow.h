#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "welcomedialog.h"
#include "newdialog.h"
#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    WelcomeDialog *welDialog;
    NewDialog *newPage;


private slots:
    void openNewPage(){
        welDialog->hide();
        delete welDialog;
        newPage = new NewDialog(this);
        newPage->show();
    }
    void openFile(){
        QString path = QFileDialog::getOpenFileName(this,"Open File","../8086Software/examples",
                                                    "All known files(*.asm *.exe *.com);;"
                                                    "Assembly source files(*.asm);;"
                                                    "Binary execute files(*.com);;"
                                                    "Execute files(*.exe);;"
                                                    "All files(*.*)");
        qDebug() << path;
    }

};
#endif // MAINWINDOW_H
