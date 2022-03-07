#ifndef CLIENTE_H
#define CLIENTE_H 

#include <iostream>

using std::cout;
using std::string; 

class Cliente{
    private:
        double telefono;
        double identificacion;
        string nombre;
        string email;

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