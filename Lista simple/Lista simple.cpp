// Lista simple.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Lista.h"
#include <string>


int main()
{
	int x;
	Lista * nuevaLista = new Lista();
	for (int i = 0; i < 5; i++) {
		cout << "ingrese un numero" << endl;
		cin >> x;
		nuevaLista->agregarAlInicio(x);
	}
	cout << nuevaLista->verLista() << endl;
	system("pause");

	return 0;
}

