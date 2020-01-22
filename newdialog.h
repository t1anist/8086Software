#ifndef NEWDIALOG_H
#define NEWDIALOG_H

#include <QDialog>
#include <QButtonGroup>

namespace Ui {
class NewDialog;
}

class NewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewDialog(QWidget *parent = nullptr);
    ~NewDialog();


private:
    Ui::NewDialog *ui;
    QButtonGroup *buttonGroup;

signals:
    void templateType(int id);

private slots:
    void checkedButton(int id){
        emit templateType(id);
    }
};

#endif // NEWDIALOG_H
