#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;





class nodoBHotel
{
	int* claves; // Array de claves
	string* nombres; //Array de nombres
	nodoBHotel** ramas;   //Ramas
	int cuentas;	 //Cuentas
	bool hoja;
	int tam;
public:

	nodoBHotel(int t, bool leaf) {
		tam = t;
		claves = new int[1000 * tam - 1];
		nombres = new string[1000 * tam - 1];
		ramas = new nodoBHotel * [1000 * tam];
		cuentas = 0;
		hoja = leaf;
	}
	void insertNonFull(int k, string a);
	void splitChild(int i, nodoBHotel* y);
	void traverse();
	nodoBHotel* search(int k);
	bool booleanSearch(int k);
	void ModificarN
	(int ced, string nom);
	//Borrado
	int findKey(int k);
	void deletion(int k);
	void removeFromLeaf(int idx);
	void removeFromNonLeaf(int idx);
	int getPredecessor(int idx);
	string getNPred(int idx);
	int getSuccessor(int idx);
	string getNSucc(int idx);
	void fill(int idx);
	void borrowFromPrev(int idx);
	void borrowFromNext(int idx);
	void merge(int idx);
	friend class arbolBHotel;
};

class arbolBHotel
{
private:
	nodoBHotel* root;
public:
	arbolBHotel() { root = NULL; }
	void CargarArchivos();
	void Mostrar();
	nodoBHotel* busqueda(int buscado);
	bool ClaveExiste(int buscado);
	void ModificarNombre(int ced, string nom);
	void Insertar(int ced, string nombre);
	void Borrar(int k);
};

void arbolBHotel::CargarArchivos() {
	string cadena;
	string letra;
	string codigo;
	string nombre;

	ifstream archivo("Usuarios.txt");
	while (getline(archivo, letra))
	{
		// Detecta las divisiones dentro de los archivos
		cadena = letra;

		int pos1 = cadena.find(";");
		codigo = cadena.substr(0, pos1);
		cadena = cadena.erase(0, pos1 + 1);

		pos1 = cadena.find(";");
		nombre = cadena.substr(0, pos1);
		cadena = cadena.erase(0, pos1 + 1);

		Insertar(stoi(codigo), nombre);

	}
	archivo.close();
}

void nodoBHotel::traverse() {
	int i;
	for (i = 0; i < cuentas; i++) {
		if (hoja == false) {
			ramas[i]->traverse();
		}
		cout << "[" << claves[i] << ":" << nombres[i] << "] ";
	}
	if (hoja == false) {
		ramas[i]->traverse();
	}
}

nodoBHotel* nodoBHotel::search(int buscado) {
	int i = 0;
	while (i < cuentas && buscado> claves[i]) {
		i++;
	}
	if (claves[i] == buscado)
		return this;
	if (hoja == true)
		return NULL;
	return ramas[i]->search(buscado);
}

bool nodoBHotel::booleanSearch(int buscado) {
	nodoBHotel* aux = search(buscado);
	if (aux == NULL) {
		return false;
	}
	else
		return true;

}

void arbolBHotel::Insertar(int ced, string nombre) {
	if (root == NULL) { //si el arbol esta vacio inserta en la raiz
		root = new nodoBHotel(5, true);
		root->claves[0] = ced;
		root->nombres[0] = nombre;
		root->cuentas = 1;
	}
	else { //si no esta vacio
		string a = "";
		if (!ClaveExiste(ced)) { //verifica si la identificacion ya existe
			cout << ced << endl;
			if (root->cuentas == 2 * 5 - 1) { //si la pagina esta llena
				nodoBHotel* nuevo = new nodoBHotel(5, false);
				nuevo->ramas[0] = root;
				nuevo->splitChild(0, root);
				int i = 0;
				if (nuevo->claves[0] < ced)
					i++;
				nuevo->ramas[i]->insertNonFull(ced, nombre);
				root = nuevo;
			}
			else { //si la pagina NO esta llena
				root->insertNonFull(ced, nombre);
			}
		}
		else {
			cout << "Identificacion repetida: " << ced << endl;
		}
	}
}

void nodoBHotel::insertNonFull(int ced, string nombre) {
	int i = cuentas - 1;
	if (hoja == true) { //Si el nodo es hoja
		while (i >= 0 && claves[i] > ced) { //Mueve los valores para hacer espacio
			claves[i + 1] = claves[i];
			nombres[i + 1] = nombres[i];
			i--;
		}
		claves[i + 1] = ced;	//introduce los nuevos valores en sus lugares correspondientes
		nombres[i + 1] = nombre;
		cuentas += 1;
	}
	else { //si el nodo NO es hoja
		while (i >= 0 && claves[i] > ced) {
			i--;
		}
		if (ramas[i + 1]->cuentas == 4) {
			splitChild(i + 1, ramas[i + 1]);
			if (claves[i + 1] < ced)
				i++;
		}
		ramas[i + 1]->insertNonFull(ced, nombre);
	}
}

void nodoBHotel::splitChild(int i, nodoBHotel* y) {
	nodoBHotel* z = new nodoBHotel(y->tam, y->hoja); //pagina donde se almacenara la mitad de la pagina por dividir
	z->cuentas = tam - 1;
	for (int j = 0; j < tam - 1; j++) {  //mueve los ultimos elementos de la pagina vieja a la nueva
		z->claves[j] = y->claves[j + tam];
		z->nombres[j] = y->nombres[j + tam];
	}
	if (y->hoja == false) { //mueve la ultima rama
		for (int j = 0; j < tam; j++) {
			z->ramas[j] = y->ramas[j + tam];
		}
	}
	y->cuentas = tam - 1;

	for (int j = cuentas; j >= i + 1; j--) {	//se prepara el espacio para el nuevo nodo
		ramas[j + 1] = ramas[j];
	}
	ramas[i + 1] = z;		//se agrega la nueva pagina al nodo

	for (int j = cuentas - 1; j >= i; j--) { // se busca la mediana
		claves[j + 1] = claves[j];
		nombres[j + 1] = nombres[j];
	}
	claves[i] = y->claves[tam - 1]; //la mediana se pasa a la pagina correspondiente
	nombres[i] = y->nombres[tam - 1];
	cuentas += 1;
}

void arbolBHotel::Mostrar() {
	if (root != NULL)
		root->traverse();
}

nodoBHotel* arbolBHotel::busqueda(int buscado) {
	return (root == NULL) ? NULL : root->search(buscado);
}

bool arbolBHotel::ClaveExiste(int buscado) {
	bool val = root->booleanSearch(buscado);
	return val;
}

void arbolBHotel::ModificarNombre(int ced, string nom) {
	if (root != NULL) {
		root->ModificarN(ced, nom);
	}
}

void nodoBHotel::ModificarN(int ced, string nom) {
	int i = 0;
	while (i<cuentas && ced> claves[i])
		i++;
	if (claves[i] == ced)
		nombres[i] = nom;
	if (hoja == true)
		cout << "";
	else {
		ramas[i]->booleanSearch(ced);
	}
}

//BORRADO
int nodoBHotel::findKey(int buscado) {
	int idx = 0;
	while (idx < cuentas && claves[idx] < buscado) {
		++idx;
	}
	return idx;
}

void nodoBHotel::deletion(int buscado) {
	int idx = findKey(buscado);
	if (idx < cuentas && claves[idx] == buscado) {
		if (hoja) {
			removeFromLeaf(idx);
		}
		else {
			removeFromNonLeaf(idx);
		}
	}
	else {
		if (hoja) {
			cout << "La identificacion: " << buscado << " no existe." << endl;
			return;
		}
		bool flag = ((idx == cuentas) ? true : false);
		if (ramas[idx]->cuentas < tam) {
			fill(idx);
		}
		if (flag && idx > cuentas) {
			ramas[idx - 1]->deletion(buscado);
		}
		else {
			ramas[idx]->deletion(buscado);
		}
	}
	return;
}

void nodoBHotel::removeFromLeaf(int idx) {
	for (int i = idx + 1; i < cuentas; ++i) {
		claves[i - 1] = claves[i];
		nombres[i - 1] = nombres[i];
	}
	cuentas--;
	return;
}

void nodoBHotel::removeFromNonLeaf(int idx) {
	int k = claves[idx];
	if (ramas[idx]->cuentas >= tam) {
		int pred = getPredecessor(idx);
		string npred = getNPred(idx);
		claves[idx] = pred;
		nombres[idx] = npred;
		ramas[idx]->deletion(pred);
	}
	else if (ramas[idx + 1]->cuentas >= tam) {
		int succ = getSuccessor(idx);
		string nsucc = getNSucc(idx);
		claves[idx] = succ;
		nombres[idx] = nsucc;
		ramas[idx + 1]->deletion(succ);
	}
	else {
		merge(idx);
		ramas[idx]->deletion(k);
	}
	return;
}

int nodoBHotel::getPredecessor(int idx) {
	nodoBHotel* cur = ramas[idx];
	while (!cur->hoja) {
		cur = cur->ramas[cur->cuentas];
	}
	return cur->claves[cur->cuentas - 1];
}

string nodoBHotel::getNPred(int idx) {
	nodoBHotel* cur = ramas[idx];
	while (!cur->hoja) {
		cur = cur->ramas[cur->cuentas];
	}
	return cur->nombres[cur->cuentas - 1];
}

int nodoBHotel::getSuccessor(int idx) {
	nodoBHotel* cur = ramas[idx + 1];
	while (!cur->hoja) {
		cur = cur->ramas[0];
	}
	return cur->claves[0];
}

string nodoBHotel::getNSucc(int idx) {
	nodoBHotel* cur = ramas[idx + 1];
	while (!cur->hoja) {
		cur = cur->ramas[0];
	}
	return cur->nombres[0];
}

void nodoBHotel::fill(int idx) {
	if (idx != 0 && ramas[idx - 1]->cuentas >= tam) {
		borrowFromPrev(idx);
	}
	else if (idx != cuentas && ramas[idx + 1]->cuentas >= tam) {
		borrowFromNext(idx);
	}
	else {
		if (idx != cuentas) {
			merge(idx);
		}
		else {
			merge(idx - 1);
		}
	}
	return;
}

void nodoBHotel::borrowFromPrev(int idx) {
	nodoBHotel* hijo = ramas[idx];
	nodoBHotel* hermano = ramas[idx - 1];
	for (int i = hijo->cuentas - 1; i >= 0; --i) {
		hijo->claves[i + 1] = hijo->claves[i];
		hijo->nombres[i + 1] = hijo->nombres[i];
	}
	if (!hijo->hoja) {
		for (int i = hijo->cuentas; i >= 0; --i) {
			hijo->ramas[i + 1] = hijo->ramas[i];
		}
	}
	hijo->claves[0] = claves[idx - 1];
	if (!hijo->hoja) {
		hijo->ramas[0] = hermano->ramas[hermano->cuentas];
	}
	claves[idx - 1] = hermano->claves[hermano->cuentas - 1];
	nombres[idx - 1] = hermano->nombres[hermano->cuentas - 1];
	hijo->cuentas += 1;
	hermano->cuentas -= 1;
	return;
}

void nodoBHotel::borrowFromNext(int idx) {
	nodoBHotel* hijo = ramas[idx];
	nodoBHotel* hermano = ramas[idx + 1];
	hijo->claves[hijo->cuentas] = claves[idx];
	hijo->nombres[hijo->cuentas] = nombres[idx];
	if (!hijo->hoja) {
		hijo->ramas[hijo->cuentas + 1] = hermano->ramas[0];
	}
	claves[idx] = hermano->claves[0];
	nombres[idx] = hermano->nombres[0];
	for (int i = 1; i < hermano->cuentas; ++i) {
		hermano->claves[i - 1] = hermano->claves[i];
		hermano->nombres[i - 1] = hermano->nombres[i];
	}
	if (!hermano->hoja) {
		for (int i = 1; i <= hermano->cuentas; ++i) {
			hermano->ramas[i - 1] = hermano->ramas[i];
		}
	}
	hijo->cuentas += 1;
	hermano->cuentas -= 1;
	return;
}

void nodoBHotel::merge(int idx) {
	nodoBHotel* hijo = ramas[idx];
	nodoBHotel* hermano = ramas[idx + 1];
	hijo->claves[tam - 1] = claves[idx];
	hijo->nombres[tam - 1] = nombres[idx];
	for (int i = 0; i < hermano->cuentas; ++i) {
		hijo->claves[i + tam] = hermano->claves[i];
		hijo->nombres[i + tam] = hermano->nombres[i];
	}
	if (!hijo->hoja) {
		for (int i = 0; i <= hermano->cuentas; ++i) {
			hijo->ramas[i + tam] = hermano->ramas[i];
		}
	}
	for (int i = idx + 1; i < cuentas; ++i) {
		claves[i - 1] = claves[i];
		nombres[i - 1] = nombres[i];
	}
	for (int i = idx + 2; i <= cuentas; ++i) {
		ramas[i - 1] = ramas[i];
	}
	hijo->cuentas += hermano->cuentas + 1;
	cuentas--;
	delete hermano;
	return;
}

void arbolBHotel::Borrar(int k) {
	if (root == NULL) {
		cout << "Arbol vacio" << endl;
		return;
	}
	root->deletion(k);
	if (root->cuentas == 0) {
		nodoBHotel* tmp = root;
		if (root->hoja) {
			root = NULL;
		}
		else {
			root = root->ramas[0];
		}
		delete tmp;
	}
	return;
}