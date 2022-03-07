#include <iostream>
#include "Directorio.h"

void Directorio::crearCliente()
{
    double id, telefono;
    string nombreCompleto, email;
    // Pedimos los datos
    cout << "Por favor ingrese el nombre completo: ";
    cin >> nombreCompleto;
    cout << "Por favor ingrese el email: ";
    cin >> email;
    cout << "Por favor ingrese la identificacion: ";
    cin >> id;
    cout << "Por favor ingrese el telefono: ";
    cin >> telefono;

    clientes.push_back(Cliente(id, nombreCompleto, email, telefono));
}

void Directorio::crearMascota()
{
    double id;
    string raza, tipoDeSangre, nombre, dia, mes, anio;
    int tipoAnimal, edad, opc;
    float peso;

    cout << "Por favor ingrese la identificacion de la mascota: ";
    cin >> id;
    cout << "Por favor ingrese el nombre: ";
    cin >> nombre;
    cout << "Por favor ingrese el tipo de animal (0. Perro/1. Gato/2. Otro): ";
    cin >> tipoAnimal;
    cout << "Por favor ingrese el peso: ";
    cin >> peso;
    cout << "Por favor ingrese la edad: ";
    cin >> edad;
    cout << "Por favor ingrese la raza: ";
    cin >> raza;
    cout << "Por favor ingrese el tipo de sangre: ";
    cin >> tipoDeSangre;
    cout << "En que estado se encuentra la mascota (0. Viva/1.Muerta): ";
    cin >> opc;
    if (opc == 0)
    {
        mascotas.push_back(Mascota(id, nombre, tipoAnimal, peso, edad, raza, tipoDeSangre));
    }
    else
    {
        cout << "Por favor ingrese el dia de defuncion: ";
        cin >> dia;
        cout << "Por favor ingrese el mes de defuncion: ";
        cin >> mes;
        cout << "Por favor ingrese el anio de defuncion: ";
        cin >> anio;
        mascotas.push_back(Mascota(id, nombre, tipoAnimal, peso, edad, raza, tipoDeSangre, 1, dia, mes, anio));
    }
}

void Directorio::imprimirCantidadClientes()
{
    cout << "Cantidad de clientes: ";
    cout << clientes.size();
    cout << "\n";
}

void Directorio::imprimirInformacionClientes()
{
    cout << "Informacion de nuestros clientes: \n";
    for (int i = 0; i < clientes.size(); i++)
    {
        cout << "Identificacion: " << clientes[i].getIdentificacion() << "\n";
        cout << "Nombre: " << clientes[i].getNombre() << "\n";
        cout << "Email: " << clientes[i].getEmail() << "\n";
        cout << "Telefono: " << clientes[i].getTelefono() << "\n";
    }
}

void Directorio::imprimirInformacionMascotas()
{
    for (int i = 0; i < mascotas.size(); i++)
    {
        cout << "Identificacion: " << mascotas[i].getIdentificacion() << "\n";
        cout << "Nombre: " << mascotas[i].getNombre() << "\n";
        cout << "Raza: " << mascotas[i].getRaza() << "\n";
        cout << "Peso: " << mascotas[i].getPeso() << "\n";
        if (mascotas[i].getTipoAnimal() == "0")
        {
            cout << "Tipo de animal: Perro\n";
        }
        else if (mascotas[i].getTipoAnimal() == "1")
        {
            cout << "Tipo de animal: Gato\n";
        }
        else if (mascotas[i].getTipoAnimal() == "2")
        {
            cout << "Tipo de animal: Otros\n";
        }
        cout << "Tipo de sangre: " << mascotas[i].getTipoSangre() << "\n";
        cout << "Edad: " << mascotas[i].getEdad() << "\n";
        mascotas[i].getStatus().imprimirStatus();
    }
}

void Directorio::eliminarCliente()
{
    double idBuscar;
    string idcliente;
    int pos;
    cout << "Por favor ingrese la identificacion del usuario que desea eliminar: ";
    cin >> idBuscar;
    for (int i = 0; i < clientes.size(); i++)
    {
        if (clientes[i].getIdentificacion() == idBuscar)
        {
            pos = i;
            clientes.erase(clientes.begin() + pos);
            break;
        }
    }
}

void Directorio::modificarClientes()
{
    double idBuscar;
    int opc;
    cout << "Por favor ingrese la identificacion del usuario que desea modificar: ";
    cin >> idBuscar;
    string nuevoNombre;
    double nuevoTelefono;
    double nuevoId;
    string nuevoEmail;
    for (int i = 0; i < clientes.size(); i++)
    {
        if (clientes[i].getIdentificacion() == idBuscar)
        {
            cout << "Seleccione el valor que desea modificar: 1. nombre 2. email 3. id 4. telefono"
                 << "\n";
            cin >> opc;
            switch (opc)
            {
            case 1:
                cout << "Ingrese el nuevo nombre: ";
                cin >> nuevoNombre;
                clientes[i].setNombre(nuevoNombre);
                break;
            case 2:
                cout << "Ingrese el nuevo email: ";
                cin >> nuevoEmail;
                clientes[i].setEmail(nuevoEmail);
                break;
            case 3:
                cout << "Ingrese el nuevo id: ";
                cin >> nuevoId;
                clientes[i].setIdentificacion(nuevoId);
                break;
            case 4:
                cout << "Ingrese el nuevo telefono: ";
                cin >> nuevoTelefono;
                clientes[i].setTelefono(nuevoTelefono);
                break;
            }
            break;
        }
    }
    cout << "\n";
}

void asociarClienteXMascota(){
    
}