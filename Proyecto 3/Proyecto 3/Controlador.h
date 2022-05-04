#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "PaisesLista.h"
#include "ArbolB.h"
#include "ArbolBAdministradorH.h"
#include "Paises.h"
#include "ArbolBAdministradorAg.h"
#include "Reservaciones.h"
#include "Grafos.h"
#include <thread>
#include <random>


using namespace std;



class Controlador {
public: 
	
	Paises P;
	arbolB usuario;
	arbolBHotel hotel;
	PaisesABB abb;
	arbolBAgencia agencias;
	Grafo grafos;
	Vertice vertice;
	Arista arista;
	listaReserva reserva;
	


	

	Controlador() {
	
	}
	//Metodos de lista Paises
	void llenarPaises();
	string agregarPaises(int id, string nom);
	string eliminarPaises(int id);
    string mostrarPaises();
	string modificarPaises(int id, string mod);
	// Metodos de AdministradorAgencia
	void cargarAgencias();
	bool accesarAdministradorAg(int id);

	//Metodos de Usuario
	void cargarUsuarios();
	bool accesarUsuario(int id);
	string eliminarUsuario(int id);
	//Metodos de Hoteles
	void cargarHoteles();
	bool accesarAdministradorHotel(int id);
	string agregarHoteles(int idPais, int id, string nom, int numEstrellas);
	string agregarPisos(int idPais, int idHotel, int id, string nombre, int numHabitaciones);
	string agregarHabitacion(int idPais, int idHotel, int idPiso, int idHab, string tipo, int numCamas, int precio, string estado);
	string modificarEstrellas(int idPais, int id, int numEstrellas);

	string modificarNombre(int idPais, int id, string nom);
	string modificarNombrePisos(int idPais, int idHotel,int id, string nom);

	

	//mod habitaciones
	string modificarHabitacionesNumHabitaciones(int idPais, int idHotel, int id, int  numHab);

	
	string modificarHabitacionesCamas(int idPais, int idHotel, int idPiso, int codHabitacion, int camas);
	string modificarHabitacionesTipo(int idPais, int idHotel, int idPiso, int codHabitacion, string tipo);
	string modificarHabitacionesEst(int idPais, int idHotel, int idPiso, int codHabitacion, string estado);
	
	string modificarHabitacionesPrecio(int idPais, int idHotel, int idPiso, int codHabitacion, int precio);
	string modificarCarrosNumAsientos(int idPais, int idAgencia, int idFlota, int placa, int numAsientos);
	string modificarCarrosPrecio(int idPais, int idAgencia, int idFlota, int placa, int precios);
	string modificarCarrosEstado(int idPais, int idAgencia, int idFlota, int placa, string estado);





	
	//Metodos de PaisesABB

	void cargarInfo();
	string consultarHoteles(int id);
	string consultarPisos(int idPais, int idHotel);
	string consultarHabitaciones(int idPais, int idHotel, int idPiso);
	string consultarAgencias(int id);
	string consultarFlotillas(int id, int idAgencia);
	string consultarCarros(int id, int idAgencia, int idFlotillas);
	string consultarPaises();
	string reservarHoteles(int codPais, int codHotel, int numPiso, int codHab);
	string reservarCarros(int codPais, int idAgencia, int idFlotilla, int placas);



	//Eliminar
	string eliminarHotel(int idPais, int  idHotel);
	string eliminarPisos(int idPais, int  idHotel, int idPisos);
	string eliminarAgencia(int idPais, int idAgencia);
	string eliminarFlotilla(int idPais, int idAgencia, int idFlotilla);
	string eliminarHabitacion(int idPais, int idHotel, int idPiso, int codHab);
	//Agencias
	string agregarAgencia(int idPais, int id, string nom, int numCarros);
	string agregarFlotilla(int idPais, int idAgencia, int id, string nombre, int numCarros);
	string agregarCarro(int idPais, int idAgencia, int idFlota, int placa, string modelo, int numAsientos, int annio, int precio, string estado);

	//mod agencias
	string modificarAgenciasNombre(int idPais, int id, string nom);
	string modificarAgenciasNumCarros(int idPais, int id, int numCarros);
	string modificarFlotillasNombre(int idPais, int idAgencia, int id, string nom);
	string modificarFlotillasNumCarros(int idPais, int idAgencia, int id, int numCarros);
	//reportes agencias
	string consultarCantidadCarrosAgencia(int idPais, int idAgencia);
	string consultarAsientosCarro(int idPais, int idAgencia, int idFlota, int placa);
	string consultarUltimaAgencia();
	string consultarUltimaFlota();
	string consultarUltimoCarro();
	string consultarReservacionesCarros(int codPais, int idAgencia);

	//reportes Hoteles
	string consultarCantEstrellas(int idPaises, int idHotel);
	string consultarCantHabitaciones(int idPais, int idHotel, int idPiso);
	string consultarUltimoHotel();
	string consultarUltimoPiso();
	string consultarUltimoCuarto();
	string consultarReservacionHabitaciones(int codPais, int codHotel);

	//Grafos
	Vertice* getVertice(string nombre);

	string Dijsktra(Vertice* origen, Vertice* destino);

	void CargarArchivoConexiones();
	void CargarGrafoPaises();
	string crearCodigoHotel();
	string crearCodigoAgencia();
	pnodoAA buscarCodigoCF(int idPais, int idAgencia, int idFlota, int numPlaca);
	void CargarArchivosTodo();

	pnodoRJ buscarCodigoHH(int idPais, int idHotel, int idPiso, int idHab);
	void insertarReserva(string nomReserva, int precio, int precio2);
	string facturarHoteles();
	string pagar(string nomReserva);
	
	string facturarAgencias();

	string Profundidad(Vertice* origen);
	string Anchura(Vertice* origen);
	int Prim(Vertice* origen, Vertice* destino);

	string CancelarR(int codPais, int codHotel, int numPiso, int codHab, string mensaje);

	string cancelarReservacion(string nomReserva);

	string crearTodoIncluido();
	string borrarCarros(int idPais, int idAgencia, int idFlota, int placa);

	string CancelarRA(int codPais, int id, int codTipo, int placas, string mensaje);

	void ThreadT() { cout << ""; };
};

//Controlador de Paises 
void Controlador::llenarPaises() {
	P.llenarPaises();
}

string Controlador::agregarPaises(int id, string nom) {
	string mostrar;
	mostrar=P.Agregar(id, nom);
	return mostrar;
}

string Controlador::modificarPaises(int id, string mod) {
	string mostrar;
	mostrar = P.Modificar(id, mod);
	return mostrar;
}
string Controlador::eliminarPaises(int id) {
	string mostrar;
	mostrar = P.Eliminar(id);
	return mostrar;
}


string Controlador::mostrarPaises() {
	string mostrar;
	mostrar=P.Mostrar();
	return mostrar;
}


//Controlador de Usuarios

void Controlador::cargarUsuarios() {
	
	usuario.CargarArchivos();
	
}

bool Controlador::accesarUsuario(int id) {
	bool acceso;
	string nom;
	acceso = usuario.ClaveExiste(id);

	return acceso;
}
string Controlador::eliminarUsuario(int id) {
	
	string mensaje;
	mensaje=usuario.Borrar(id);
	return mensaje;
	
}
//Controlador
void Controlador::cargarAgencias() {
	agencias.CargarArchivos();
}

bool Controlador::accesarAdministradorAg(int id) {
	bool acceso;
	acceso = agencias.ClaveExiste(id);
	return acceso;
}
	
//Controlador de Hoteles
void Controlador::cargarHoteles() {
	hotel.CargarArchivos();
}

bool Controlador::accesarAdministradorHotel(int id) {
	bool acceso;
	acceso = hotel.ClaveExiste(id);
	return acceso;
}
//metodos Paises.h
void Controlador::cargarInfo() {
	abb.llenarInfo(P);
}
string Controlador::consultarHoteles(int id) {
	string mensaje;
	mensaje=abb.consultarHoteles(id);

	return mensaje;
}

string Controlador::consultarPisos(int idPais, int idHotel) {
	string mensaje;
	mensaje = abb.consultarPisos(idPais, idHotel);
    return mensaje;
}

string Controlador::consultarHabitaciones(int idPais, int idHotel, int idPiso) {
	string mensaje;

	mensaje = abb.consultarHabitaciones(idPais, idHotel, idPiso);

	return mensaje;
}

string Controlador::consultarAgencias(int id) {
	string mensaje;

	mensaje = abb.consultarAgencias(id);

	return mensaje;

}
string Controlador::consultarFlotillas(int idPais, int idAgencia) {
	string mensaje;

	mensaje = abb.consultarFlotillas(idPais,idAgencia);

	return mensaje;
}
string Controlador::consultarCarros(int idPais, int idAgencia, int idCarros) {
	string mensaje;
	mensaje = abb.consultarCarros(idPais, idAgencia, idCarros);

	return mensaje;

}
string Controlador::consultarPaises() {

	string mensaje;
	mensaje = abb.consultarPaises();
	return mensaje;

}
string Controlador::reservarHoteles(int codPais, int codHotel, int numPiso, int codHab) {
	string mensaje;
	mensaje = abb.ReservarHabitacion(codPais, codHotel, numPiso, codHab);
	return mensaje;
}
string Controlador::reservarCarros(int codPais, int idAgencia, int idFlotilla, int placas) {
	string mensaje;
	mensaje = abb.ReservarCarro(codPais, idAgencia, idFlotilla, placas);
	return mensaje;
}

//Metodos de hoteles
string Controlador::agregarHoteles(int idPais, int id, string nom, int numEstrellas) {
	string mensaje;
	mensaje = abb.agregarHotel(idPais, id, nom, numEstrellas);
	return mensaje;
}
string Controlador::agregarPisos(int idPais, int idHotel, int id, string nombre, int numHabitaciones) {
	string mensaje;
	mensaje = abb.agregarPiso(idPais, idHotel, id, nombre, numHabitaciones);
	return mensaje;

}
string Controlador::agregarHabitacion(int idPais, int idHotel, int idPiso, int idHab, string tipo, int numCamas, int precio, string estado) {
	string mensaje;
	mensaje = abb.agregarHabitacion(idPais, idHotel, idPiso, idHab, tipo, numCamas, precio, estado);
	return mensaje;
}
string Controlador::modificarEstrellas(int idPais, int id, int numEstrellas) {
	string mensaje;
	mensaje = abb.modificarEstrellas(idPais, id, numEstrellas);
	return mensaje;
}

string Controlador::modificarNombre(int idPais, int id, string nom) {
	string mensaje;
	mensaje = abb.modificarHoteles(idPais, id, nom);
	return mensaje;

}
string Controlador::modificarNombrePisos(int idPais,int idHotel ,int id, string nom) {
	string mensaje;
	mensaje = abb.modificarPisos(idPais, idHotel, id, nom);
	return mensaje;
}

string Controlador::modificarHabitacionesNumHabitaciones(int idPais, int idHotel, int id, int  numHab) {
	string mensaje;
	mensaje = abb.modificarHabitacionesNumHabitacion(idPais, idHotel, id, numHab);
	return mensaje;
}
//Habitaciones
string Controlador::modificarHabitacionesCamas(int idPais, int idHotel, int idPiso, int codHabitacion, int camas) {
	string mensaje;
	mensaje = abb.modificarHabitacionesCamas(idPais, idHotel, idPiso, codHabitacion, camas);
	return mensaje;

}


string Controlador::modificarHabitacionesEst(int idPais, int idHotel, int idPiso, int codHabitacion, string estado){
	string mensaje;
	mensaje = abb.modificarHabitacionesEstado(idPais, idHotel, idPiso, codHabitacion, estado);
	return mensaje;
}
string Controlador::modificarHabitacionesTipo(int idPais, int idHotel, int idPiso, int codHabitacion, string tipo) {
	string mensaje;
	mensaje = abb.modificarHabitacionesTipo(idPais, idHotel, idPiso, codHabitacion, tipo);
	return mensaje;

}
string Controlador::modificarHabitacionesPrecio(int idPais, int idHotel, int idPiso, int codHabitacion, int precio) {
	string mensaje;
	mensaje = abb.modificarHabitacionesPrecio(idPais, idHotel, idPiso, codHabitacion, precio);
	return mensaje;
}




//Eliminar

string Controlador::eliminarHotel(int idPais,int  idHotel) {

	string mensaje;
	mensaje = abb.borrarHotel(idPais, idHotel);
	return mensaje;
	
}
string Controlador::eliminarPisos(int idPais, int  idHotel, int idPisos) {
	string mensaje;
	mensaje = abb.borrarPisos(idPais, idHotel, idPisos);
	return mensaje;

}

string Controlador::eliminarAgencia(int idPais, int  idAgencia) {

	string mensaje;
	mensaje = abb.borrarAgencia(idPais, idAgencia);
	return mensaje;

}
string Controlador::eliminarFlotilla(int idPais, int idAgencia, int idFlotilla) {

	string mensaje;
	mensaje = abb.borrarFlotilla(idPais, idAgencia, idFlotilla);
	return mensaje;
}

string Controlador::eliminarHabitacion(int idPais, int idHotel, int idPiso, int codHab) {
	string mensaje;
	mensaje = abb.borrarHabitacion(idPais, idHotel, idPiso, codHab);
	return mensaje;
}
//Metodos Agencias

string Controlador::agregarAgencia(int idPais, int id, string nom, int numCarros) {
	string mensaje;
	mensaje = abb.agregarAgencia(idPais, id, nom, numCarros);
	return mensaje;

}
string Controlador::agregarFlotilla(int idPais, int idAgencia, int id, string nombre, int numCarros) {
	string mensaje;
	mensaje = abb.agregarFlotilla(idPais, idAgencia, id, nombre, numCarros);
	return mensaje;

}
string Controlador::agregarCarro(int idPais, int idAgencia, int idFlota, int placa, string modelo, int numAsientos, int annio, int precio, string estado) {
	string mensaje;
	mensaje = abb.agregarCarro(idPais, idAgencia, idFlota, placa, modelo, numAsientos, annio, precio, estado);
	return mensaje;

}

string Controlador::modificarAgenciasNumCarros(int idPais, int id, int numCarros) {
	string mensaje;
	mensaje = abb.modificarAgenciasNumCarros(idPais, id, numCarros);
	return mensaje;

}
string Controlador::modificarAgenciasNombre(int idPais, int id, string nom) {
	string mensaje;
	mensaje = abb.modificarAgenciasNombre(idPais, id, nom);
	return mensaje;
}
string Controlador::modificarFlotillasNombre(int idPais, int idAgencia, int id, string nom) {

	string mensaje;
	mensaje = abb.modificarFlotillasNombre(idPais, idAgencia, id, nom);
	return mensaje;
}

string Controlador::modificarFlotillasNumCarros(int idPais, int idAgencia, int id, int numCarros) {

	string mensaje;
	mensaje = abb.modificarFlotillasNumCarros(idPais, idAgencia, id, numCarros);
	return mensaje;
}

string Controlador::modificarCarrosEstado(int idPais, int idAgencia, int idFlota, int placa, string estado) {
	string mensaje;
	mensaje = abb.modificarCarrosEstado(idPais, idAgencia, idFlota, placa, estado);
	return mensaje;

}
string Controlador::modificarCarrosPrecio(int idPais, int idAgencia, int idFlota, int placa, int precio) {
	string mensaje;
	mensaje = abb.modificarCarrosPrecio(idPais, idAgencia, idFlota, placa, precio);
	return mensaje;
}

string Controlador::modificarCarrosNumAsientos(int idPais, int idAgencia, int idFlota, int placa, int numAsientos) {
	string mensaje;
	mensaje = abb.modificarCarrosNumAsientos(idPais, idAgencia, idFlota, placa, numAsientos);
	return mensaje;

}

//reportes agencias
string Controlador::consultarCantidadCarrosAgencia(int idPais, int idAgencia) {
	string mensaje;
	mensaje = abb.consultarCantidadCarrosAgencia(idPais, idAgencia);
	return mensaje;
}
string Controlador::consultarAsientosCarro(int idPais, int idAgencia, int idFlota, int placa) {
	string mensaje;
	mensaje = abb.consultarAsientosCarro(idPais, idAgencia, idFlota, placa);
	return mensaje;
}
string Controlador::consultarUltimaAgencia() {
	string mensaje;
	mensaje = abb.consultarUltimaAgencia();
	return mensaje;
}
string Controlador::consultarUltimaFlota() {
	string mensaje;
	mensaje = abb.consultarUltimaFlota();
	return mensaje;
}
string Controlador::consultarUltimoCarro() {
	string mensaje;
	mensaje = abb.consultarUltimoCarro();
	return mensaje;
}
string Controlador::consultarReservacionesCarros(int idPais, int idAgencia) {
	string mensaje;
	mensaje = abb.consultarReservacionesCarros(idPais, idAgencia);
	return mensaje;
}
string Controlador::consultarCantEstrellas(int idPais, int idHotel) {
	string mensaje;
	mensaje = abb.consultarCantEstrellas(idPais, idHotel);
	return mensaje;

}
string Controlador::consultarCantHabitaciones(int idPais, int idHotel, int idPisos){
	string mensaje;
	mensaje = abb.consultarCantHabitaciones(idPais, idHotel, idPisos);
	return mensaje;
}
string Controlador::consultarUltimoHotel() {
	string mensaje;
	mensaje = abb.consultarUltimoHotel();
	return mensaje;
}
string Controlador::consultarUltimoPiso() {
	string mensaje;
	mensaje = abb.consultarUltimoPiso();
	return mensaje;
}
string Controlador::consultarUltimoCuarto() {
	string mensaje;
	mensaje = abb.consultarUltimoCuarto();
	return mensaje;
}

string Controlador::consultarReservacionHabitaciones(int codPais, int codHotel){
	string mensaje;
	mensaje = abb.consultarReservacionesHabitaciones(codPais, codHotel);
	return mensaje;

}
Vertice* Controlador::getVertice(string nombre) {
	Vertice* vertice = grafos.getVertice(nombre);
	return vertice;
}

string Controlador::Dijsktra(Vertice* origen, Vertice* destino) {

	string mensaje;
    mensaje= grafos.Dijsktra(origen, destino);
	return mensaje;
}
void Controlador::CargarArchivoConexiones() {
	grafos.CargarArchivoConexiones();
}
void Controlador::CargarGrafoPaises() {
	grafos.llenarPaises();
}

string Controlador::crearCodigoHotel() {
	string codigo="RH";
	while (true) {
		int cod = rand() % 10000000;

		codigo = codigo + to_string(cod);
		if (!reserva.buscarReserva(codigo)) {
			break;
		}
	}
	return codigo;
}
string Controlador::crearCodigoAgencia() {
	string codigo = "RA";
	while (true) {
		int cod = rand() % 10000000;

		codigo = codigo + to_string(cod);
		if (!reserva.buscarReserva(codigo)) {
			break;
		}
	}
	return codigo;
}
string Controlador::crearTodoIncluido() {
	string codigo = "RTD";
	while (true) {
		int cod = rand() % 10000000;

		codigo = codigo + to_string(cod);
		if (!reserva.buscarReserva(codigo)) {
			break;
		}
	}
	return codigo;
}
pnodoRJ Controlador::buscarCodigoHH(int idPais, int idHotel, int idPiso, int idHab) {
	pnodoRJ aux;
	aux = abb.buscarCodigoHH(idPais, idHotel, idPiso, idHab);
	return aux;
}
void Controlador::insertarReserva(string nomReserva, int precio, int precio2) {
	abb.insertarReserva(nomReserva, precio, precio2);

}

string Controlador::facturarHoteles() {
	string mensaje;
	mensaje = abb.facturarHoteles();
	return mensaje;
}
string Controlador::pagar(string nomReserva) {
	string mensaje;
	mensaje = abb.pagar(nomReserva);
	return mensaje;
}
pnodoAA Controlador::buscarCodigoCF(int idPais, int idAgencia, int idFlota, int numPlaca) {
	pnodoAA aux;
	aux = abb.buscarCodigoCF(idPais, idAgencia, idFlota, numPlaca);
	return aux;
}
string Controlador::facturarAgencias() {
	string mensaje;
	mensaje = abb.facturarAgencias();
	return mensaje;
}

string Controlador::Profundidad(Vertice* origen) {
	string mensaje;
	mensaje = grafos.Profundidad(origen);
	return mensaje;

}
string Controlador::Anchura(Vertice* origen) {
	string mensaje;
	mensaje = grafos.Anchura(origen);
	return mensaje;

}
int Controlador::Prim(Vertice* origen, Vertice* destino) {
	int costo;
	costo = grafos.MSTPrim(origen, destino);
	return costo;
}
void Controlador::CargarArchivosTodo() {
	
	thread Hoteles();
	thread Usuarios();
	thread Agencias();
	thread Pisos();
	thread Habitaciones();
	thread Paises();
	thread Flotillas();
	thread Carros();
}
string Controlador::CancelarR(int codPais, int codHotel, int numPiso, int codHab, string mensaje) {

	mensaje = abb.CancelarR(codPais, codHotel, numPiso, codHab, mensaje);
	return mensaje;
}
string Controlador::cancelarReservacion(string nomReserva) {
	string mensaje;
	mensaje = reserva.cancelarReservacion(nomReserva);
	return mensaje;
}
string Controlador::borrarCarros(int idPais, int idAgencia, int idFlota, int placa) {
	string mensaje;
	mensaje = abb.borrarCarros(idPais, idAgencia, idFlota, placa);
	return mensaje;
}

string Controlador::CancelarRA(int codPais, int id, int codTipo, int placas, string mensaje) {
	mensaje = abb.CancelarRA(codPais, id, codTipo, placas, mensaje);
	return mensaje;
}
