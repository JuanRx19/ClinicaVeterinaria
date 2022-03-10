#ifndef DIRECTORIO_H
#define DIRECTORIO_H

#include <iostream>
#include "clienteXmascota.h"
#include <vector>
#include "Status.h"

using std::string;
using std::vector;
using std::cout;
using std::cin;

class Directorio
{
private:
    vector<Cliente> clientes;
    vector<Mascota> mascotas;
    map<double, vector<Mascota> > clientexmascota;
    map<double, vector<Cliente> > mascotaxcliente;

public:
    void crearCliente();
    void crearMascota();
    void imprimirCantidadClientes();
    void imprimirInformacionClientes();
    void imprimirInformacionMascotas();
    void eliminarClienteMascota();
    void eliminarCliente();
    void modificarClientes();
    void asociarClienteXMascota();
    void imprimirMascotasCliente();
    void asociarMascotaXCliente();
    void imprimirClientesMascota();
    void cambiarStatus();
};

#endif