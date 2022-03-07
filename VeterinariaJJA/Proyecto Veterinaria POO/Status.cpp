#include <iostream>
#include "Status.h"

Status::Status()
{
    estado = -1;
    fechaDefuncion = "";
}

Status::Status(int status)
{
    this->estado = status;
    this->fechaDefuncion = "";
}

Status::Status(int status, string dia, string mes, string anio)
{
    this->estado = status;
    this->fechaDefuncion = dia + "/" + mes + "/" + anio;
}

void Status::imprimirStatus()
{
    if (estado == 0)
    {
        cout << "Estado: Vivo\n";
    }
    else if (estado == 1)
    {
        cout << "Estado: Muerto\n";
        cout << "Fecha de defuncion: " << fechaDefuncion << "\n";
    }
}

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