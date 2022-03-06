#include <Mascota.h>
#include <Cliente.h>



string Mascota::getNombre()
{
    return this->nombre;
}

string Mascota::getFechaDi()
{
    return this->fechaDi;
}

string Mascota::getTipoSangre()
{
    return this->tipoSangre;
}

string Mascota::getTipo()
{
    return this->tipo;
}

string Mascota::getRaza()
{
    return this->raza;
}

float Mascota::getPeso()
{
    return this->peso;
}

int Mascota::getEdad()
{
    return this->edad;
}

int Mascota::getStatus()
{
    return this->status;
}

double Mascota::getIdentificacion()
{
    return this->identificacion;
}

double Cliente::getIdentificacion()
{
    return this->identificacion;
}

string Cliente::getNombre()
{
    return this->nombre;
}

double Cliente::getTelefono()
{
    return this->telefono;
}

string Cliente::getEmail()
{
    return this->email;
}