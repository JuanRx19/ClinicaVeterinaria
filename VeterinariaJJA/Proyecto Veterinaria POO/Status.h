#ifndef STATUS_H
#define STATUS_H 

#include <iostream>

using std::string;
using std::cout;
using std::cin;

class Status{
    private:
        int estado;
        string fechaDefuncion;

    public:
        Status();
        Status(int status);
        Status(int status, string dia, string mes, string anio);
        void imprimirStatus();
        void setEstado(int identificacion);
        void setFechaDefuncion(string fechaDefuncion);
        int getEstado();
        string getFechaDefuncion();

};

#endif