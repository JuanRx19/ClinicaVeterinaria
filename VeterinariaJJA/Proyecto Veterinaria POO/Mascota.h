#ifndef MASCOTA_H
#define MASCOTA_H 

#include <iostream>


using std::string; 

class Mascota{
    private:
        string nombre;
        string fechaDi;
        string tipoSangre;
        string tipo;
        string raza;
        float peso;
        int edad;
        int status;
        double identificacion;
        
    public:
        void setNombre(string nombre);
        void setFechaDi(string fechaDi);
        void setTipoSangre(string tipoSangre);
        void setTipo(string tipo);
        void setRaza(string raza);
        void setPeso( float peso );
        void setEdad( int edad );
        void setStatus( int status );
        void setIdentificacion(double Identificacion);
        string getNombre();
        string getFechaDi();
        string getTipoSangre();
        string getTipo();
        string getRaza();
        float getPeso();
        int getEdad();
        int getStatus();
        double getIdentificacion();

};

#endif