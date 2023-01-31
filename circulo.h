#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint> //libreria de dibujo
#include <QPainter> //libreria pintor
#include <QFileDialog> //archibo de dialogo
#include <QMessageBox> //mensajes



class Circulo : public QPoint
{
    int  anchox; //atributos coordenadas x
    int anchoy;//cooerdenadas y
    int radio; //ancho
public: //metodos
    Circulo();
    Circulo(int posix, int posiy, int _radio);//constructor con parametros
    int getRadio() const;  //metodo obtener
    void setRadio(int value);//metodo modificar
    int getAnchoy() const;
    void setAnchoy(int value);
    int getAnchox() const;
    void setAnchox(int value);
};

#endif // CIRCULO_H
