#include <iostream>
#include "Cliente.h"


void Cliente::setIdentificacion(double Identificacion)
{
    this->identificacion = identificacion;
}

double Cliente::getIdentificacion()
{
    return this->identificacion;
}

void Cliente::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Cliente::getNombre()
{
    return this->nombre;
}

void Cliente::setTelefono(double telefono)
{
    this->telefono = telefono; 
}

double Cliente::getTelefono()
{
    return this->telefono;
}

void Cliente::setEmail(string email)
{
    this->email = email;
}

string Cliente::getEmail()
{
    return this->email;
}

