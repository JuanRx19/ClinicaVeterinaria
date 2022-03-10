#ifndef CLIENTE_H
#define CLIENTE_H 

#include <iostream>

using std::cout;
using std::string; 

class Cliente{
    //Atributos que corresponden a la clase cliente
    private:
        double telefono;
        double identificacion;
        string nombre;
        string email;

    //Definicion de metodos publicos, constructores y sets/gets
    public:
        Cliente();
        Cliente(double id, string nombre, string email, double telefono);
        void setTelefono(double identificacion);
        void setIdentificacion(double identificacion);
        void setNombre(string nombre);
        void setEmail(string email);
        void mostrarCliente();
        double getTelefono();
        double getIdentificacion();
        string getNombre();
        string getEmail();

};

#endif