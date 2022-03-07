#ifndef DIRECTORIO_H
#define DIRECTORIO_H

#include <iostream>
#include "clienteXmascota.h"
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
    map<double, vector<int>> clientexmascota;
    map<double, vector<int>> mascotaxcliente;

public:
    void crearCliente();
    void crearMascota();
    void imprimirCantidadClientes();
    void imprimirInformacionClientes();
    void imprimirInformacionMascotas();
    void eliminarCliente();
    void modificarClientes();
    void asociarClienteXMascota();
    void imprimirMascotasCliente();
    void asociarMascotaXCliente();
    void imprimirClientesMascota();
};

#endif