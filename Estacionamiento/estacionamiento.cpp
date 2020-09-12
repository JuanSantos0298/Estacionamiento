#include "estacionamiento.h"
#include "ui_estacionamiento.h"

Estacionamiento::Estacionamiento(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Estacionamiento)
{
    ui->setupUi(this);
}

Estacionamiento::~Estacionamiento()
{
    delete ui;
}

void Estacionamiento::on_btnIngresar_clicked()
{
    Administrador vent;
    vent.setModal(true);
    vent.exec();
}

void Estacionamiento::on_btnAcceder_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
