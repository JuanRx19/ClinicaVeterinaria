#ifndef DIRECTORIO_H
#define DIRECTORIO_H

#include <iostream>
#include "Cliente.h"
#include "Mascota.h"
#include <vector>
#include <string.h>
#include <conio.h>

using std::string;
using std::vector;
using std::cout;
using std::cin;

class Directorio
{
private:
    vector<Cliente> cliente;
    vector<Mascota> mascotas;

public:
    void crearCliente();
    void crearMascota();
    void imprimirCantidaPropietarios();
    void imprimirInformacionClientes();
    void imprimirInformacionMascotas();
    void consultarPropietariosMascota();
    void consultarMascotasPropietarios();
    void asociarMascotasPropietarios();
    void asociarPropietariosMascotas();
    void cambiarStatusMascota();
    void eliminarPropietariosMascota();
};

#endif