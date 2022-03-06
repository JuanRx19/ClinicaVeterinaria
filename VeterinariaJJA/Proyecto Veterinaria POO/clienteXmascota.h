#ifndef CLIENTEXMASCOTA_H
#define CLIENTEXMASCOTA_H 

#include <iostream>
#include <Mascota.h>
#include <Cliente.h>

using std::string; 

class clienteXmascota{
    private:
    Mascota mascota;
    Cliente cliente;

    public:
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
    string getEmail();

};

#endif