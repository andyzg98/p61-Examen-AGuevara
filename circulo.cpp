#include "circulo.h"
//metodo constructor
Circulo::Circulo()
{
        anchox=200;  //coordenadas
        anchoy=200; //coordenadas
        radio=100;
}

int Circulo::getRadio() const
{
    return radio;
}

void Circulo::setRadio(int evaluar)
{
    radio=evaluar;
}

int Circulo::getAnchoy() const
{
    return anchoy;
}

void Circulo::setAnchoy(int evaluar)
{
anchoy=evaluar;
}

int Circulo::getAnchox() const
{
    return anchox;
}

void Circulo::setAnchox(int evaluar)
{
    anchox=evaluar;
}

Circulo::Circulo(int posix, int posiy,int _radio)

{

    this->anchox=posix;
    this->anchoy=posiy;
    this->radio=_radio;
}
