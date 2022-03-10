#include <iostream>
#include "Cliente.h"

//Constructor para posibles errores
Cliente::Cliente(){
    telefono = -1;
    identificacion = -1;
    nombre = "";
    email = "";
}

//Constructor de cliente, para crear objetos.
Cliente::Cliente(double id, string nombre, string email, double telefono){
    this->identificacion = id;
    this->nombre = nombre;
    this->email = email;
    this->telefono = telefono;
}

//Metodo el cual me permite imprimir un cliente.
void Cliente::mostrarCliente(){
    cout << "Identificacion: " << identificacion << "\n";
    cout << "Nombre: " << nombre << "\n";
    cout << "Email: " << email << "\n";
    cout << "Telefono: " << telefono << "\n";
}

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

