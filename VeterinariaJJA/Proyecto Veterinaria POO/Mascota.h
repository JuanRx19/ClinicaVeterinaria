#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>
#include "Status.h"

using std::string;

class Mascota
{
private:
    string nombre;
    string tipoSangre;
    string tipoAnimal;
    string raza;
    float peso;
    int edad;
    double identificacion;
    Status status;

public:
    Mascota();
    Mascota(double id, string nombre, int tipoAnimal, float peso, int edad, string raza, string tipoDeSangre);
    Mascota(double id, string nombre, int tipoAnimal, float peso, int edad, string raza, string tipoDeSangre, int estado, string dia, string mes, string anio);
    void mostrarMascota();
    void setNombre(string nombre);
    void setTipoSangre(string tipoSangre);
    void setTipoAnimal(string tipo);
    void setRaza(string raza);
    void setPeso(float peso);
    void setEdad(int edad);
    void setStatus(Status status);
    void setIdentificacion(double Identificacion);
    string getNombre();
    string getTipoSangre();
    string getTipoAnimal();
    string getRaza();
    Status getStatus();
    float getPeso();
    int getEdad();
    double getIdentificacion();
};

#endif