#include "recentfileaction.h"

RecentFileAction::RecentFileAction(QObject *parent) : QAction(parent)
{
    //connect(this,&RecentFileAction::triggered,this,&RecentFileAction::clicked);
}

void RecentFileAction::openRecent(){
    emit openFile(this->text());
}
