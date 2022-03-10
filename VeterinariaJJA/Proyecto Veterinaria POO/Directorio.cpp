#include <iostream>
#include "Directorio.h"

// Primer metodo el cual me permite crear un cliente.
void Directorio::crearCliente()
{
    int opc = 0;
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

    // Ciclo que recorre el vector clientes. Verifica si la id existe en clientes.
    for (int i = 0; i < clientes.size(); i++)
    {
        if (id == clientes[i].getIdentificacion())
        {
            opc = 1;
        }
    }
    if (opc == 0)
    {
        // Hacemos un pushback una vez se haya verificado que la id no se encuentre, llamamos el constructor y crea el objeto.
        clientes.push_back(Cliente(id, nombreCompleto, email, telefono));
        // Aquí creamos un mapa cuya key es la id del cliente.
        clientexmascota[id];
    }
    else
    {
        cout << "La identificacion ya existe, por favor intentalo de nuevo \n";
    }
}

// Metodo para cambiar el estado de una mascota.
void Directorio::cambiarStatus()
{
    map<double, vector<Mascota>>::iterator iter;
    double idBuscar;
    int nuevoStatus;
    string dia, mes, anio;
    string fechaDifuncion;
    cout << "Ingrese la identificacion de la mascota a cambiar el status \n";
    cin >> idBuscar;
    cout << "Digite el nuevo estado de la mascota 0/Vivo 1/Muerto: ";
    cin >> nuevoStatus;
    // Ciclo que me permite buscar nuestra mascota en el vector y actualizar su respectivo estado.
    for (int i = 0; i < mascotas.size(); i++)
    {
        // Verificamos su existencia.
        if (mascotas[i].getIdentificacion() == idBuscar)
        {
            if (nuevoStatus == 0)
            {
                // Dependiendo del nuevo estado a asignar, crearemos un nuevo objeto de tipo status y este
                // reemplazará el status que ya se encontraba relacionado
                mascotas[i].setStatus(Status(0));
            }
            else
            {
                // Contiene la misma funcion de la anterior posibilidad, pero en este caso es para cambiar el estado a muerto.
                cout << "Por favor ingrese el dia de defuncion: ";
                cin >> dia;
                cout << "Por favor ingrese el mes de defuncion: ";
                cin >> mes;
                cout << "Por favor ingrese el anio de defuncion: ";
                cin >> anio;
                // Procede a reemplazar ejecutando el segundo constructor.
                mascotas[i].setStatus(Status(1, dia, mes, anio));
            }
        }
    }
    // Ciclo el cual me permite recorre mi mapa
    for (iter = clientexmascota.begin(); iter != clientexmascota.end(); iter++)
    {
        // Ciclo para extraer las posiciones del vector asociado a nuestro mapa : "iter":vector(Mascota)
        for (int i = 0; i < iter->second.size(); i++)
        {
            if (iter->second[i].getIdentificacion() == idBuscar)
            {
                if (nuevoStatus == 0)
                {
                    // Aquí hacemos lo mismo que con los vectores, pero actualizando la copia y llamando el constructor.
                    iter->second[i].setStatus(Status(0));
                }
                else
                {
                    // Lo mismo que arriba pero con el segundo constructor.
                    iter->second[i].setStatus(Status(1, dia, mes, anio));
                }
                break;
            }
        }
    }
}

// Metodo el cual me permite crear un objeto de tipo mascota.
void Directorio::crearMascota()
{
    double id;
    string raza, tipoDeSangre, nombre, dia, mes, anio;
    int tipoAnimal, edad, opc = 0, opc2;
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
    cin >> opc2;

    // Ciclos para verificar la disponibilidad de la identificación
    for (int i = 0; i < mascotas.size(); i++)
    {
        if (id == mascotas[i].getIdentificacion())
        {
            opc = 1;
        }
    }

    if (opc == 0)
    {
        if (opc2 == 0)
        {
            // Creacion del objeto Mascota e implementación en nuestro vector que almacena las clases. Ejecuta el constructor
            // para mascotas con status vivo
            mascotas.push_back(Mascota(id, nombre, tipoAnimal, peso, edad, raza, tipoDeSangre));
        }
        else
        {
            // Igualmente, creación del objeto mascota e implementación, pero con nuevos parametros para ejecutar el constructor
            // con el estado muerto.
            cout << "Por favor ingrese el dia de defuncion: ";
            cin >> dia;
            cout << "Por favor ingrese el mes de defuncion: ";
            cin >> mes;
            cout << "Por favor ingrese el anio de defuncion: ";
            cin >> anio;
            mascotas.push_back(Mascota(id, nombre, tipoAnimal, peso, edad, raza, tipoDeSangre, 1, dia, mes, anio));
        }
        // Creacion de un mapa en el mapa mascotaxcliente, el cual asocia una mascota a diferentes dueños.
        mascotaxcliente[id];
    }
    else
    {
        cout << "La identificacion ya existe, por favor intentalo de nuevo \n";
    }
}

// Imprime la cantidad de clientes en total.
void Directorio::imprimirCantidadClientes()
{
    cout << "Cantidad de clientes: ";
    cout << clientes.size();
    cout << "\n";
}

// Imprime con un ciclo con información de todos los clientes existentes.
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

// Imprime con un ciclo con la información de todas las mascotas existentes.
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
        // Como estado es un objeto, debemos acceder a este para imprimirlo.
        mascotas[i].getStatus().imprimirStatus();
    }
}
// Metodo para eliminar un cliente asociado a una mascota.
void Directorio::eliminarClienteMascota()
{
    map<double, vector<Cliente>>::iterator iter;
    double idBuscar;
    double idMascota;
    int pos;
    cout << "Por favor ingrese la identificacion del usuario que desea eliminar: ";
    cin >> idBuscar;
    cout << "Por favor ingrese el id de la mascota que lo desea eliminar: ";
    cin >> idMascota;

    // Ciclo el cual me permite recorre el mapa buscando la mascota y su respectivo cliente a eliminar.
    for (iter = mascotaxcliente.begin(); iter != mascotaxcliente.end(); iter++)
    {
        if (iter->first == idMascota)
        {
            for (int i = 0; i < iter->second.size(); i++)
            {
                if (iter->second[i].getIdentificacion() == idBuscar)
                {
                    iter->second.erase(iter->second.begin() + i);
                    break;
                }
            }
        }
    }
}

// Metodo para eliminar un cliente de la veterinaria.
void Directorio::eliminarCliente()
{
    // Declaracion que me permite obtener las keys de mi mapa
    map<double, vector<Cliente>>::iterator iter;
    double idBuscar;
    double idMascota;
    int pos;
    cout << "Por favor ingrese la identificacion del usuario que desea eliminar: ";
    cin >> idBuscar;

    // Primer ciclo el cual me permite buscar el cliente en el vector clientes y lo elimina.
    for (int i = 0; i < clientes.size(); i++)
    {
        if (clientes[i].getIdentificacion() == idBuscar)
        {
            pos = i;
            clientes.erase(clientes.begin() + pos);
            break;
        }
    }

    // Ciclo el cual me permite recorrer el mapa de mascotasxcliente y elimina el cliente de cada mascota
    // en la cual se encuentre asociada
    for (iter = mascotaxcliente.begin(); iter != mascotaxcliente.end(); iter++)
    {
        for (int i = 0; i < iter->second.size(); i++)
        {
            if (iter->second[i].getIdentificacion() == idBuscar)
            {
                iter->second.erase(iter->second.begin() + i);
                break;
            }
        }
    }
}

// Metodo para modificar un cliente.
void Directorio::modificarClientes()
{
    map<double, vector<Cliente>>::iterator iter;
    double idBuscar;
    int opc;
    cout << "Por favor ingrese la identificacion del usuario que desea modificar: ";
    cin >> idBuscar;
    string nuevoNombre;
    double nuevoTelefono;
    string nuevoEmail;

    // Ciclo el cual me permite buscar el id.
    for (int i = 0; i < clientes.size(); i++)
    {
        if (clientes[i].getIdentificacion() == idBuscar)
        {
            // Seleccionamos la opcion a modificar.
            cout << "Seleccione el valor que desea modificar: 1. nombre 2. email 3. telefono"
                 << "\n";
            cin >> opc;
            switch (opc)
            {
            // En cada caso se setea la informacion y actualiza nuestros objetos.
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
                cout << "Ingrese el nuevo telefono: ";
                cin >> nuevoTelefono;
                clientes[i].setTelefono(nuevoTelefono);
                break;
            }
            break;
        }
    }
    // Ciclo el cual me permite recorrer el mapa y el segundo ciclo recorre el vector asociado.
    for (iter = mascotaxcliente.begin(); iter != mascotaxcliente.end(); iter++)
    {
        for (int i = 0; i < iter->second.size(); i++)
        {
            if (iter->second[i].getIdentificacion() == idBuscar)
            {
                // Al haber actualizado la informacion en el vector clientes, debo modificarla también en el mapa.
                switch (opc)
                {
                case 1:
                    iter->second[i].setNombre(nuevoNombre);
                    break;
                case 2:
                    iter->second[i].setEmail(nuevoEmail);
                    break;
                case 3:
                    iter->second[i].setTelefono(nuevoTelefono);
                    break;
                }
                break;
            }
        }
    }
    cout << "\n";
}

// Metodo el cual me permite crear una relación de mi cliente con las mascotas.
void Directorio::asociarClienteXMascota()
{
    double id, idMascota;
    cout << "Por favor digite la identificacion del cliente: ";
    cin >> id;
    for (int i = 0; i < clientes.size(); i++)
    {
        if (clientes[i].getIdentificacion() == id)
        {
            cout << "Por favor digite la identificacion de la mascota: ";
            cin >> idMascota;
            for (int y = 0; y < mascotas.size(); y++)
            {
                if (mascotas[y].getIdentificacion() == idMascota)
                {
                    // Creamos una doble asociacion, ya que un cliente puede tener varias mascotas y una mascota
                    // puede tener varios clientes. Por ende, generamos una doble relación.
                    clientexmascota[id].push_back(mascotas[y]);
                    mascotaxcliente[idMascota].push_back(clientes[i]);
                    cout << "Asociado correctamente \n";
                }
            }
        }
    }
}

// Metodo el cual me permite imprimir las mascotas asociadas a algún cliente.
void Directorio::imprimirMascotasCliente()
{
    double id;
    cout << "Por favor digite la identificacion del cliente a mostrar: ";
    cin >> id;
    for (int i = 0; i < clientes.size(); i++)
    {
        if (clientes[i].getIdentificacion() == id)
        {
            for (int y = 0; y < clientexmascota[id].size(); y++)
            {
                clientexmascota[id][y].mostrarMascota();
            }
        }
    }
}

// Metodo el cual me permite realizar la asociacion de clientes a una mascota
void Directorio::asociarMascotaXCliente()
{
    double id, idCliente;
    cout << "Por favor digite la identificacion de la mascota: ";
    cin >> id;
    for (int i = 0; i < mascotas.size(); i++)
    {
        if (mascotas[i].getIdentificacion() == id)
        {
            cout << "Por favor digite la identificacion del cliente: ";
            cin >> idCliente;
            for (int y = 0; y < clientes.size(); y++)
            {
                if (clientes[y].getIdentificacion() == idCliente)
                {
                    // Pasa igual que en el metodo ClienteXMascota. Las mascotas pueden tener varios dueños y viceversa.
                    mascotaxcliente[id].push_back(clientes[y]);
                    clientexmascota[idCliente].push_back(mascotas[i]);
                    cout << "Asociado correctamente \n";
                }
            }
        }
    }
}

// Metodo el cual me permite imprimir los clientes o propietarios que tiene una mascota.
void Directorio::imprimirClientesMascota()
{
    double id;
    cout << "Por favor digite la identificacion de la mascota a mostrar: ";
    cin >> id;
    for (int i = 0; i < mascotas.size(); i++)
    {
        if (mascotas[i].getIdentificacion() == id)
        {
            for (int y = 0; y < mascotaxcliente[id].size(); y++)
            {
                mascotaxcliente[id][y].mostrarCliente();
            }
        }
    }
}