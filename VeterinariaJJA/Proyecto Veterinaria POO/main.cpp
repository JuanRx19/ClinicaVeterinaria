#include <iostream>
#include "Directorio.h"

using std::cin;
using std::cout;
using std::string;

// Metodo el cual genera un menú de opciones para ejecutar en la veterinaría.
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
        cout << "8. Imprimir las mascotas de algun cliente \n";
        cout << "9. Asignar cliente a mascota \n";
        cout << "10. Imprimir los clientes de alguna mascota \n";
        cout << "11. Eliminar cliente de una mascota\n";
        cout << "12. Cambiar status de una mascota\n";
        cout << "13. Imprimir informacion mascotas \n";
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
            directorio.imprimirMascotasCliente();
            break;
        case 9:
            directorio.asociarMascotaXCliente();
            break;
        case 10:
            directorio.imprimirClientesMascota();
            break;
        case 11:
            directorio.eliminarClienteMascota();
            cout << "Cliente eliminado de la mascota correctamente \n";
            break;
        case 12:
            directorio.cambiarStatus();
            cout << "Status cambiado correctamente \n";
            break;
        case 13:
            directorio.imprimirInformacionMascotas();
        default:
            break;
        }
    } while (opc != 0);
}

int main()
{
    Directorio directorio;
    menu(directorio);
    return 0;
}