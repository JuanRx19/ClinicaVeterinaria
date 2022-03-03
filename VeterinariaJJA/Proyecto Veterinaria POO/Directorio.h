#ifndef DIRECTORIO_H
#define DIRECTORIO_H

#include <iostream>
#include "Cliente.h"
#include "Mascota.h"
#include <vector>

using std::string;
using std::vector;

class Directorio
{
private:
    vector<Cliente> propietarios;
    vector<Mascota> mascotas;
public:
    void inicializarDatos();
    void imprimirCantidaPropietarios();
    void imprimirInformacionPropietarios();
    void imprimirInformacionMascotas();
    void consultarPropietariosMascota();
    void consultarMascotasPropietarios();
    void asociarMascotasPropietarios();
    void asociarPropietariosMascotas();
    void cambiarStatusMascota();
    void eliminarPropietariosMascota();
};

#endif