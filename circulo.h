#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint> //libreria de dibujo
#include <QPainter> //libreria pintor
#include <QFileDialog> //archibo de dialogo
#include <QMessageBox> //mensajes



class Circulo : public QPoint
{
    int  anchox; //atributos
    int anchoy;
    int radio;
public: //metodos
    Circulo();
    Circulo(int posix, int posiy, int _radio);
    int getRadio() const;
    void setRadio(int evaluar);
    int getAnchoy() const;
    void setAnchoy(int evaluar);
    int getAnchox() const;
    void setAnchox(int evaluar);
};

#endif // CIRCULO_H
