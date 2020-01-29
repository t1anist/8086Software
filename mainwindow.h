#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "welcomedialog.h"
#include "newdialog.h"
#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QLabel>
#include <QDebug>
#include <QMessageBox>

#include "Qsci/qsciscintilla.h"
#include "Qsci/qscilexercpp.h"
#include "Qsci/qsciapis.h"


#include "Qsci/qsciscintilla.h"
#include "Qsci/qscilexercpp.h"
#include "Qsci/qsciapis.h"


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
    QsciScintilla *editor;
    QString curFile;
    QLabel *col;
    QLabel *line;
    bool isFixedFile = false;
    void setQscintilla();
    void connectAction();
    bool maybeSave();
    void loadFile(const QString &fileName);
    bool saveFile(const QString &fileName);
    void setCurrentFile(const QString &fileName);
    QString strippedName(const QString &fullFileName);
    void openTemplateType(int type);



private slots:
    void openNewPage();
    void openTemplate(int);
    void newFile();
    void open();
    bool save();
    bool saveAs();
    void documentWasModified();
    void openComTemplate();
    void openExeTemplate();
    void openExamples();
    void cursorChange(int lin, int index);


};
#endif // MAINWINDOW_H
