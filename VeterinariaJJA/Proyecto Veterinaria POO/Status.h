#ifndef STATUS_H
#define STATUS_H 

#include <iostream>


using std::string; 

class Status{
    private:
        int estado;
        string fechaDefuncion;

    public:
        void setEstado(int identificacion);
        void setFechaDefuncion(string fechaDefuncion);
        int getEstado();
        string getFechaDefuncion();

};

#endif