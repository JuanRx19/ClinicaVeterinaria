#include "clienteXmascota.h"

//Constructor para posibles errores
ClienteXMascota::ClienteXMascota()
{
}

//Constructor para ClienteXMascota
ClienteXMascota::ClienteXMascota(Cliente cliente, Mascota mascota)
{
    this->cliente = cliente;
    this->mascota = mascota;
}

Cliente ClienteXMascota::getCliente()
{
    return this->cliente;
}

Mascota ClienteXMascota::getMascota()
{
    return this->mascota;
}