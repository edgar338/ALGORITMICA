//Programa: GRADOS
#include <iostream> //Nueva carpeta
#include <stdio.h>

using namespace std;

int main()
{
	float C, F;

	cout <<"Grados Celscius: "; //salida
	cin >> C; //entrada

	F = ((C* 9/5)+32);

	cout << C << "°C son igual a " << F << "°F" << endl;

	return 0;
}
