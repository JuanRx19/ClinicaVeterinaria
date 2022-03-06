all: compilar
compilar: cliente mascota status clienteXMascota directorio main
	g++ -o Salida Cliente.o Mascota.o Status.o Directorio.o Main.o
cliente: Cliente.cpp Cliente.h Mascota.h Status.h
	g++ -c Cliente.cpp
mascota: Mascota.cpp Mascota.h Status.h
	g++ -c Mascota.cpp
status: Status.cpp Status.h
	g++ -c Status.cpp
clienteXMascota: ClienteXMascota.cpp Mascota.h Cliente.h Status.h
	g++ -c ClienteXMascota.cpp
directorio: Directorio.cpp Directorio.h Cliente.h Mascota.h Status.h ClienteXMascota.h
	g++ -c Directorio.cpp
main: Main.cpp Cliente.h
	g++ -c main.cpp
clean: #Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o