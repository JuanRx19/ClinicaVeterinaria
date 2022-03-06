#include <iostream>
#include "Directorio.h"

void Directorio::crearCliente()
{
    double id, telefono;
    string nombreCompleto, email;
    // Pedimos los datos
    cout << "Por favor ingrese el nombre completo: ";
    gets(nombreCompleto);
    cout << "Por favor ingrese el email: ";
    cin >> email;
    cout << "Por favor ingrese la identificacion: ";
    cin >> id;
    cout << "Por favor ingrese el telefono: ";
    cin >> telefono;

    cliente.push_back(Cliente(id, nombreCompleto, email, telefono));
}
void Directorio::crearMascota(){

}

void Directorio::imprimirCantidaPropietarios()
{
}

void Directorio::imprimirInformacionClientes()
{
    cout << "Informacion de nuestros clientes: \n";
    for(int i = 0; i < cliente.size(); i++){
        cout << "Identificacion: " << cliente[i].getIdentificacion() << "\n";
        cout << "Nombre: " << cliente[i].getNombre() << "\n";
        cout << "Email: " << cliente[i].getEmail() << "\n";
        cout << "Telefono: " << cliente[i].getTelefono() << "\n";
    }
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
