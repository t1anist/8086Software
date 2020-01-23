#ifndef WELCOMEDIALOG_H
#define WELCOMEDIALOG_H

#include <newdialog.h>
#include <QDialog>


namespace Ui {
class WelcomeDialog;
}

class WelcomeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeDialog(QWidget *parent = nullptr);
    ~WelcomeDialog();

private:
    Ui::WelcomeDialog *ui;
    NewDialog *newDialog;

private slots:
    //Button slots
    void newPressed();
    void helpPressed();
    void openFileDialog();

signals:
    //signals to mainwindow
    void newPage();
    void helpPage();
    void openFile();

};

#endif // WELCOMEDIALOG_H
