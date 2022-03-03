#include <iostream>
#include "Directorio.h"



void Directorio::inicializarDatos()
{
    Cliente propiet1, propiet2, propiet3, propiet4, propiet5, propiet6;
    Mascota masc1, masc2, masc3, masc4, masc5, masc6;

    propiet1.setNombre("Debora Vilar");
    propiet1.setIdentificacion(20202492);
    propiet2.setNombre("Ignacio Rodríguez");
    propiet2.setIdentificacion(30458452);
    propiet3.setNombre("Erika Muñoz");
    propiet3.setIdentificacion(1058845781);
    propiet4.setNombre("Modesto Villaverde");
    propiet4.setIdentificacion(31321432);
    propiet5.setNombre("Camilo Torres");
    propiet5.setIdentificacion(4476283);
    propiet6.setNombre("Sebastian Agudelo");
    propiet6.setIdentificacion(30432176);

    masc1.setIdentificacion(101);
    masc1.setPeso(160);

    masc2.setIdentificacion(901);
    masc2.setPeso(30);

    masc3.setIdentificacion(701);
    masc3.setPeso(45);

    masc4.setIdentificacion(502);
    masc4.setPeso(60);

    masc5.setIdentificacion(102);
    masc5.setPeso(55);

    masc6.setIdentificacion(902);
    masc6.setPeso(100);

    // Incluir los propietarios en el vector
    propietarios.push_back(propiet1);
    propietarios.push_back(propiet2);
    propietarios.push_back(propiet3);
    propietarios.push_back(propiet4);
    propietarios.push_back(propiet5);
    propietarios.push_back(propiet6);

    mascotas.push_back(masc1);
    mascotas.push_back(masc2);
    mascotas.push_back(masc3);
    mascotas.push_back(masc4);
    mascotas.push_back(masc5);
    mascotas.push_back(masc6);
    
}

void Directorio::imprimirCantidaPropietarios()
{
    
}

void Directorio::imprimirInformacionPropietarios()
{
    
}

void Directorio::imprimirInformacionMascotas()
{
    
}

void Directorio::consultarPropietariosMascota()
{
    
}

void Directorio::consultarMascotasPropietarios()
{
    
}

void Directorio::asociarMascotasPropietarios()
{
    
}

void Directorio::asociarPropietariosMascotas()
{
    
}

void Directorio::cambiarStatusMascota()
{
    
}

void Directorio::eliminarPropietariosMascota()
{
    
}
