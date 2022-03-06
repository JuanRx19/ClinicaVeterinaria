#include "clienteXmascota.h"

ClienteXMascota::ClienteXMascota()
{
}

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