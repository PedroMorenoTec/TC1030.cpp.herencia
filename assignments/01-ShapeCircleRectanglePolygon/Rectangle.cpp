#include "Rectangle.hpp"
#include "Shape.hpp"

Rectangle::Rectangle() : Shape{}
{
    this->ancho=0;
    this->alto=0;
}

Rectangle::Rectangle(int ancho, int alto) : Shape{ancho, alto}
{
    this->ancho=ancho;
    this->alto=alto;
}

int Rectangle::getAlto()
{
    return alto;
}

int Rectangle::getAncho()
{
    return ancho;
}