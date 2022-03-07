#include <iostream>
#include "Directorio.h"

using std::cin;
using std::cout;
using std::string;

void menu(Directorio directorio)
{
    int opc = 0;
    int opc2 = 0;
    do
    {
        cout << "============================\n";
        cout << "     Clinica Veterinaria\n";
        cout << "============================\n";
        cout << "1. Crear cliente o propietario \n";
        cout << "2. Crear mascota \n";
        cout << "3. Cantidad de clientes \n";
        cout << "4. Modificar cliente \n";
        cout << "5. Eliminar cliente \n";
        cout << "6. Imprimir clientes \n";
        cout << "7. Asignar mascota a cliente \n";
        cout << "0. Salir \n";

        cin >> opc;

        switch (opc)
        {
        case 1:
            directorio.crearCliente();
            cout << "Cliente creado correctamente\n";
            break;
        case 2:
            directorio.crearMascota();
            cout << "Mascota ingresada correctamente\n";
            break;
        case 3:
            directorio.imprimirCantidadClientes();
            break;
        case 4:
            directorio.modificarClientes();
            cout << "Cliente modificado correctamente \n";
            break;
        case 5:
            directorio.eliminarCliente();
            cout << "Cliente eliminado correctamente \n";
            break;
        case 6:
            directorio.imprimirInformacionClientes();
            break;
        case 7:
            directorio.asociarClienteXMascota();
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            break;
        default:
            break;
        }
    } while (opc != 0);
}

int main()
{
    /*string nombre;
    cout << "Funciono, escribe tu nombre: ";
    cin >> nombre;
    cout << "Tu nombre es: " << nombre;*/
    Directorio directorio;

    // Inicializar datos
    menu(directorio);

    // TODO: Imprimir la informción de los propietarios que tengan parqueadero solamente
    // Decir cuantos propietarios tienen propiedades con parqueadero.
    return 0;
}