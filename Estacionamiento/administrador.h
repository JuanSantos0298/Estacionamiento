#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <QDialog>

namespace Ui {
class Administrador;
}

class Administrador : public QDialog
{
    Q_OBJECT

public:
    explicit Administrador(QWidget *parent = nullptr);
    ~Administrador();

private slots:
    void on_btnTaridas_clicked();

    void on_btnRegistros_clicked();

    void on_btnComentarios_clicked();

    void on_btnSalir_clicked();

private:
    Ui::Administrador *ui;
};

#endif // ADMINISTRADOR_H
