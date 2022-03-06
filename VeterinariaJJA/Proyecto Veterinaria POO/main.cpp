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
        cout << "Bienvenidos°°°°°    \n";
        cout << "1. Mostrar informacion clientes \n";
        cout << "2. Mostrar informacion propietarios con parqueadero \n";
        cout << "3. Mostrar numero de propietarios con parqueadero \n";
        cout << "4. Mostrar numero de propietarios sin parqueadero \n";
        cout << "5. Mostrar informacion de propiedades con parqueadero \n";
        cout << "6. Mostrar numero de propiedades con parqueadero \n";
        cout << "7. Mostrar numero de propiedades sin parqueadero \n";
        cout << "8. Mostrar informacion de propiedades con area mayor a 50mts \n";
        cout << "9. Mostrar propietarios con propiedades desocupadas \n";
        cout << "10. Mostrar propiedades por medio del piso \n";
        cout << "11. Mostrar las propiedades que tienen un area menor 50 \n";
        cout << "12. Mostrar dinero recaudado \n";
        cout << "0. Salir \n";

        cin >> opc;

        switch (opc)
        {
        case 1:
            directorio.imprimirCantidaPropietarios();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
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
    directorio.inicializarDatos();
    menu(directorio);

    // TODO: Imprimir la informción de los propietarios que tengan parqueadero solamente
    // Decir cuantos propietarios tienen propiedades con parqueadero.
    return 0;
}