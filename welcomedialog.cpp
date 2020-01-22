#include "welcomedialog.h"
#include "ui_welcomedialog.h"
#include <QMenu>

WelcomeDialog::WelcomeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WelcomeDialog)
{
    //load ui
    ui->setupUi(this);
    //cancel "what's this"
    Qt::WindowFlags flags=Qt::Dialog;
    flags |=Qt::WindowCloseButtonHint;
    setWindowFlags(flags);
    //New Button:
    connect(ui->newButton,&QToolButton::pressed,this,&WelcomeDialog::newPressed);
    //Example Button:
    QMenu *exampleMenu = new QMenu;
    exampleMenu->addAction("Hello,world");
    exampleMenu->addAction("add / subtract");
    exampleMenu->addAction("more examples");
    ui->exampleButton->setMenu(exampleMenu);
    ui->exampleButton->setPopupMode(QToolButton::InstantPopup);
    setStyleSheet("QToolButton::menu-indicator{image:none}");
    //Help Button
    connect(ui->helpButton,&QToolButton::pressed,this,&WelcomeDialog::helpPressed);
    //Recent Button
    QMenu *recentMenu = new QMenu;
    QAction *openFile= recentMenu->addAction("other files");
    ui->recentButton->setMenu(recentMenu);
    ui->recentButton->setPopupMode(QToolButton::InstantPopup);
    connect(openFile,&QAction::triggered,this,&WelcomeDialog::openFileDialog);

}

WelcomeDialog::~WelcomeDialog()
{
    delete ui;
}


