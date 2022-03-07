#ifndef DIRECTORIO_H
#define DIRECTORIO_H

#include <iostream>
#include "Cliente.h"
#include "Mascota.h"
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;

class Directorio
{
private:
    vector<Cliente> clientes;
    vector<Mascota> mascotas;

public:
    void crearCliente();
    void crearMascota();
    void imprimirCantidadClientes();
    void imprimirInformacionClientes();
    void imprimirInformacionMascotas();
    void eliminarCliente();
    void modificarClientes();
};

#endif