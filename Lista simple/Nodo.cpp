#include "stdafx.h"
#include "Nodo.h"


Nodo::Nodo()
{
	setNumero(0);
	setSiguiente(NULL);
}

Nodo::Nodo(int _numero)
{
	setNumero(_numero);
	setSiguiente(NULL);

}

Nodo::Nodo(int _numero, Nodo * _siguiente)
{
	setNumero(_numero);
	setSiguiente(_siguiente);
}

Nodo::~Nodo()
{
}

int Nodo::getNumero()
{
	return numero;
}

void Nodo::setNumero(int _numero)
{
	this->numero = _numero;
}


Nodo * Nodo::getSiguiente()
{
	return siguiente;
}

void Nodo::setSiguiente(Nodo * _siguiente)
{
	this->siguiente = _siguiente;
}
