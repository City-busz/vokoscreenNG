#include "QvkHelp.h"

#include <QDesktopServices>
#include <QUrl>

QvkHelp::QvkHelp( Ui_MainWindow *ui_mainwindow )
{
    ui = ui_mainwindow;
}


QvkHelp::~QvkHelp()
{
}

void QvkHelp::initHelp()
{
    connect( ui->toolButtonAudioHelp, SIGNAL( clicked( bool ) ), this, SLOT( slot_audioHelp() ) );

    connect( ui->toolButtonHelpVideoPath, SIGNAL( clicked( bool ) ), this, SLOT( slot_miscHelpVideoPath() ) );
    connect( ui->toolButtonHelpStartTime, SIGNAL( clicked( bool ) ), this, SLOT( slot_miscHelpStartTime() ) );
    connect( ui->toolButtonHelpStopRecordingAfter, SIGNAL( clicked( bool ) ), this, SLOT( slot_miscHelpStopRecordingAfter() ) );
    connect( ui->toolButtonHelpScale, SIGNAL( clicked( bool ) ), this, SLOT( slot_miscHelpScal() ) );
    connect( ui->toolButtonHelpLimitOfFreeDiskSpace, SIGNAL( clicked( bool ) ), this, SLOT( slot_miscHelpLimitOfFreeDiskSpace() ) );

    connect( ui->toolButtonAvalaibleHelp, SIGNAL( clicked( bool ) ), SLOT( slot_availableHelp() ) );
}

void QvkHelp::slot_audioHelp()
{
#ifdef Q_OS_LINUX
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/linux/3.0/audio.html", QUrl::TolerantMode ) );
#endif
#ifdef Q_OS_WIN
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/windows/3.0/audio.html", QUrl::TolerantMode ) );
#endif
}

void QvkHelp::slot_miscHelpVideoPath()
{
#ifdef Q_OS_LINUX
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/linux/3.0/misc.html#miscHelpVideoPath", QUrl::TolerantMode ) );
#endif
#ifdef Q_OS_WIN
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/windows/3.0/misc.html#miscHelpVideoPath", QUrl::TolerantMode ) );
#endif
}

void QvkHelp::slot_miscHelpStartTime()
{
#ifdef Q_OS_LINUX
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/linux/3.0/misc.html#miscHelpStartTime", QUrl::TolerantMode ) );
#endif
#ifdef Q_OS_WIN
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/windows/3.0/misc.html#miscHelpStartTime", QUrl::TolerantMode ) );
#endif
}

void QvkHelp::slot_miscHelpStopRecordingAfter()
{
#ifdef Q_OS_LINUX
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/linux/3.0/misc.html#miscHelpStopRecordingAfter", QUrl::TolerantMode ) );
#endif
#ifdef Q_OS_WIN
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/windows/3.0/misc.html#miscHelpStopRecordingAfter", QUrl::TolerantMode ) );
#endif
}

void QvkHelp::slot_miscHelpScal()
{
#ifdef Q_OS_LINUX
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/linux/3.0/misc.html#miscHelpScal", QUrl::TolerantMode ) );
#endif
#ifdef Q_OS_WIN
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/windows/3.0/misc.html#miscHelpScal", QUrl::TolerantMode ) );
#endif
}

void QvkHelp::slot_miscHelpLimitOfFreeDiskSpace()
{
#ifdef Q_OS_LINUX
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/linux/3.0/misc.html#miscHelpLimitOfFreeDiskSpace", QUrl::TolerantMode ) );
#endif
#ifdef Q_OS_WIN
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/windows/3.0/misc.html#miscHelpLimitOfFreeDiskSpace", QUrl::TolerantMode ) );
#endif
}

void QvkHelp::slot_availableHelp()
{
#ifdef Q_OS_LINUX
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/linux/3.0/available.html", QUrl::TolerantMode ) );
#endif
#ifdef Q_OS_WIN
    QDesktopServices::openUrl( QUrl( "http://linuxecke.volkoh.de/vokoscreen/help/windows/3.0/available.html", QUrl::TolerantMode ) );
#endif
}
