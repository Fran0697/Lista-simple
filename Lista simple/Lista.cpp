#include "stdafx.h"
#include "Lista.h"
#include <string>


Lista::Lista()
{
	this->setCab(NULL);
}


Lista::~Lista()
{
}

Nodo * Lista::getCab()
{
	return cab;
}

void Lista::setCab(Nodo * _cab)
{
	this->cab = _cab;
}

void Lista::agregarAlInicio(int _numero)
{
	Nodo *nuevo = new Nodo(_numero);
	if (getCab() == NULL) {
		setCab(nuevo);
	}
	else {
		nuevo->setSiguiente(cab);
		setCab(nuevo);
	}
}

string Lista::verLista()
{
	if (getCab() != NULL) {
		string lista;
		Nodo *aux = getCab();
		while (aux != NULL) {
			lista += to_string(aux->getNumero());
			aux = aux->getSiguiente();
		}
		return lista;
	}
	else {
		return "lista vacia";
	}
}

Nodo * Lista::buscar(int _numero)
{
	if (listaVacia() == false) {
		Nodo *aux = getCab();
		while (aux != NULL) {
			if (aux->getNumero() == _numero) {
				return aux;
			}
			else {
				aux = aux->getSiguiente();
			}
		}
		return NULL;
	}
	else {
		return NULL;
	}

}

bool Lista::listaVacia()
{
	return this->getCab() == NULL;
}

void Lista::agregarOrdenado(int _numero)
{
	Nodo *nuevo = new Nodo(_numero);
	if (listaVacia()) {
		setCab(nuevo);
	}
	else if (nuevo->getNumero() < getCab()->getNumero()) {
		nuevo->setSiguiente(cab);
		setCab(nuevo);
	}
	else {
		Nodo *anterior = getCab();
		Nodo *actual = getCab()->getSiguiente();
		while (actual != NULL) {
			if (nuevo->getNumero() > anterior->getNumero() && nuevo->getNumero() < actual->getNumero()) {
				nuevo->setSiguiente(actual);
				anterior->setSiguiente(nuevo);
			}
			else {
				anterior = anterior->getSiguiente();
				actual = actual->getSiguiente();
			}
		}
	}
}

bool Lista::eliminar(int _numero)
{
	bool flag;

	if (listaVacia()) {
		flag = false;
		return flag;
	}

	Nodo *nuevo = new Nodo(_numero);
	Nodo *aux = getCab();

	if (aux->getNumero() == _numero) {
		setCab(aux->setSiguiente);
		delete aux;
		flag = true;
		return flag;
	}

	while () {
		if (!aux->getSiguiente()->getNumero()==_numero && aux->getSiguiente()->getNumero() == NULL) {
		
		
		}
	
	
	}



}
