#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    // Agrega tus casos de prueba
    cout << "Test data    " << "Expected Result   " << "Actual result"<< endl;
    cout <<     "0 \t\t"      <<    "0\t\t"  <<  pago_estacionamiento(0)<< endl;
    cout <<     "1\t\t"      <<   "10\t\t"  << pago_estacionamiento(1)<< endl;
    cout <<     "3\t\t"      <<   "30\t\t"  << pago_estacionamiento(3)<< endl;
    cout <<     "5\t\t"      <<   "50\t\t"  << pago_estacionamiento(5)<< endl;
    cout <<     "6\t\t"      <<   "54\t\t"  << pago_estacionamiento(6)<< endl;
    cout <<     "8\t\t"      <<   "72\t\t" << pago_estacionamiento(8)<< endl;
    cout <<     "10\t\t"      <<   "90\t\t"  << pago_estacionamiento(10)<< endl;
    cout <<     "11\t\t"      <<   "77\t\t"  << pago_estacionamiento(11)<< endl;
    cout <<     "15\t\t"      <<   "115\t\t"  << pago_estacionamiento(15)<< endl;





    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
