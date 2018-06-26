#pragma once
#include"Nodo.h"

class Lista
{
private:
	Nodo * cab;

public:
	Lista();
	~Lista();
	Nodo * getCab();
	void setCab(Nodo *);
	void agregarAlInicio(int);
	string verLista();
	Nodo * buscar(int);
	bool listaVacia();
	void agregarOrdenado(int);
	bool eliminar(int);
	
};

