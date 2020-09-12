#include "administrador.h"
#include "ui_administrador.h"

Administrador::Administrador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Administrador)
{
    ui->setupUi(this);
}

Administrador::~Administrador()
{
    delete ui;
}

void Administrador::on_btnTaridas_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Administrador::on_btnRegistros_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Administrador::on_btnComentarios_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Administrador::on_btnSalir_clicked()
{
    close();
}
