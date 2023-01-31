#include "juego.h"
#include "ui_juego.h"


#include <QPainter>
#include <QFileDialog>

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    //QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
    //m_circulo->setX(centro.x());
    //m_circulo->setY(centro.y());
    miImagen = new QImage(this->size(),QImage::Format_ARGB32_Premultiplied);
    miImagen->fill(Qt::white);
    mPainter = new QPainter(miImagen);
    mPainter->setRenderHint(QPainter::Antialiasing);
    dibujar();
}

Juego::~Juego()
{
    delete ui;
    delete mPainter;
    delete miImagen;
}
void Juego::dibujar() //metodo que dibuja el circulo
{

    QPen pincel; //objeto pincel
    pincel.setWidth(5);
    pincel.setColor(Qt::red);
    pincel.setJoinStyle(Qt::MiterJoin);

    pincel.setColor(Qt::red);
    pincel.setWidth(3);
    // Dibujar una linea
    mPainter->setPen(pincel);
    mPainter->drawEllipse(m_circulo->getAnchox(), m_circulo->getAnchoy(), m_circulo->getRadio(), m_circulo->getRadio());
    update();
}

void Juego::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    // Dibujar la imagen
    painter.drawImage(0, 0, *miImagen);
}

void Juego::on_btnArriba_released() //mover arriba
{
    miImagen->fill(Qt::white);
    m_circulo->setAnchoy(m_circulo->getAnchoy()-1);
    dibujar();
}


void Juego::on_btnAbajo_released() //mover abajo
{
    miImagen->fill(Qt::white);
    m_circulo->setAnchoy(m_circulo->getAnchoy()+1);
    dibujar();
}


void Juego::on_btnIzqueirda_released() //mover izquierda
{
    miImagen->fill(Qt::white); // a mi imagen le asigno
    m_circulo->setAnchox(m_circulo->getAnchox()-1);
    dibujar();
}


void Juego::on_btnDerecha_released() //accion mover derecha
{
    miImagen->fill(Qt::white);
    m_circulo->setAnchox(m_circulo->getAnchox()+1);
    dibujar();
}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

