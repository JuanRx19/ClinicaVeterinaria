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

        cin >> opc;

        switch(opc)
        {
        case 1:
            directorio.crearCliente();
            cout << "Cliente creado exitosamente\n";
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
    menu(directorio);

    // TODO: Imprimir la informción de los propietarios que tengan parqueadero solamente
    // Decir cuantos propietarios tienen propiedades con parqueadero.
    return 0;
}