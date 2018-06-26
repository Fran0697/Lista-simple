#pragma once
class Nodo
{
private:
	int numero;
	Nodo * siguiente;

public:
	Nodo();
	Nodo(int);
	Nodo(int, Nodo *);
	~Nodo();
	int getNumero();
	void setNumero(int);
	Nodo *getSiguiente();
	void setSiguiente(Nodo *);

};

