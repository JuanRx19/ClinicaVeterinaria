#include <iostream>
#include "Mascota.h"

Mascota::Mascota()
{
    identificacion = -1;
    nombre = "";
    tipoAnimal = -1;
    peso = -1;
    edad = -1;
    raza = "";
    tipoSangre = "";
    status = Status();
}

// Constructor para estado de la mascota vivo
Mascota::Mascota(double id, string nombre, int tipoAnimal, float peso, int edad, string raza, string tipoDeSangre)
{
    this->identificacion = id;
    this->nombre = nombre;
    this->tipoAnimal = tipoAnimal;
    this->peso = peso;
    this->edad = edad;
    this->raza = raza;
    this->tipoSangre = tipoDeSangre;
    this->status = Status(0);
}

// Constructor para estado de la mascota muerto
Mascota::Mascota(double id, string nombre, int tipoAnimal, float peso, int edad, string raza, string tipoDeSangre, int estado, string dia, string mes, string anio)
{
    this->identificacion = id;
    this->nombre = nombre;
    this->tipoAnimal = tipoAnimal;
    this->peso = peso;
    this->edad = edad;
    this->raza = raza;
    this->tipoSangre = tipoDeSangre;
    this->status = Status(1, dia, mes, anio);
}

void Mascota::mostrarMascota(){
    cout << "Identificacion: " << identificacion << "\n";
    cout << "Nombre: " << nombre << "\n";
    if(tipoAnimal == "0"){
        cout << "Tipo de animal: Perro\n";
    }else if(tipoAnimal == "1"){
        cout << "Tipo de animal: Gato\n";
    }else if(tipoAnimal == "2"){
        cout << "Tipo de animal: Otro\n";
    }
    cout << "Peso: " << peso << "\n";
    cout << "Edad: " << edad << "\n";
    cout << "Raza: " << raza << "\n";
    cout << "Tipo de sangre: " << tipoSangre << "\n";
    status.imprimirStatus();

}

void Mascota::setNombre(string nombre)
{
    this->identificacion = identificacion;
}

string Mascota::getNombre()
{
    return this->nombre;
}

void Mascota::setTipoSangre(string tipoSangre)
{
    this->tipoSangre = tipoSangre;
}

string Mascota::getTipoSangre()
{
    return this->tipoSangre;
}

void Mascota::setTipoAnimal(string tipoAnimal)
{
    this->tipoAnimal = tipoAnimal;
}

string Mascota::getTipoAnimal()
{
    return this->tipoAnimal;
}

void Mascota::setRaza(string raza)
{
    this->raza = raza;
}

string Mascota::getRaza()
{
    return this->raza;
}

void Mascota::setPeso(float peso)
{
    this->peso = peso;
}

float Mascota::getPeso()
{
    return this->peso;
}

void Mascota::setEdad(int edad)
{
    this->edad = edad;
}

int Mascota::getEdad()
{
    return this->edad;
}

void Mascota::setStatus(Status status)
{
    this->status = status;
}

Status Mascota::getStatus()
{
    return this->status;
}

void Mascota::setIdentificacion(double identificacion)
{
    this->identificacion = identificacion;
}

double Mascota::getIdentificacion()
{
    return this->identificacion;
}