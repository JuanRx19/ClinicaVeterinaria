#ifndef CLIENTEXMASCOTA_H
#define CLIENTEXMASCOTA_H

#include <iostream>
#include "Mascota.h"
#include "Cliente.h"
#include <map>
#include <vector>
using namespace std;

using std::string;

class ClienteXMascota
{
private:
    Cliente cliente;
    Mascota mascota;

public:
    ClienteXMascota();
    ClienteXMascota(Cliente cliente, Mascota mascota);
    Cliente getCliente();
    Mascota getMascota();
};

#endif