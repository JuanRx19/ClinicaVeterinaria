#ifndef CLIENTEXMASCOTA_H
#define CLIENTEXMASCOTA_H

#include <iostream>
#include "Mascota.h"
#include "Cliente.h"

using std::string;

class ClienteXMascota
{
private:
    Cliente cliente;
    Mascota mascota;

public:
    ClienteXMascota();
    ClienteXMascota(Cliente cliente, Mascota mascota);
    Cliente getCliente();
    Mascota getMascota();
    /*public:
    string getNombre();
    string getFechaDi();
    string getTipoSangre();
    string getTipo();
    string getRaza();
    float getPeso();
    int getEdad();
    int getStatus();
    double getIdentificacion();
    double getTelefono();
    double getIdentificacion();
    string getNombre();
    string getEmail();*/
};

#endif