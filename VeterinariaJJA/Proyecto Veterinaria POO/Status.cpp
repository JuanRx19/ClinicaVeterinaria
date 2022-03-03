#include <iostream>
#include "Status.h"
#include "Status.h"


void Status::setEstado(int estado)
{
    this->estado = estado; 
}

int Status::getEstado()
{
    return this->estado;
}

void Status::setFechaDefuncion(string fechaDefuncion)
{
    this->fechaDefuncion = fechaDefuncion;
}

string Status::getFechaDefuncion()
{
    return this->fechaDefuncion;
}