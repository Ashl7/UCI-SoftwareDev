#include "mapexecution.h"
#include "ui_mapexecution.h"
#include "missionrecap.h"
#include "options.h"
#include "mainwindow.h"

mapexecution::mapexecution(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mapexecution)
{
    ui->setupUi(this);
    ui->webView->load(QUrl("qrc:/res/html/maps.html"));
}

mapexecution::~mapexecution()
{
    delete ui;
}

void mapexecution::finishClicked()
{
    this->close();
    MissionRecap *missionRecap = new MissionRecap();
    missionRecap->show();
}

void mapexecution::returnHomeClicked()
{
    this->close();
}

void mapexecution::cancelClicked()
{
    this->close();
}

void mapexecution::on_pushButton_clicked()
{
    MainWindow *mainwindow = new MainWindow();
    this -> close();
    mainwindow->show();
}
