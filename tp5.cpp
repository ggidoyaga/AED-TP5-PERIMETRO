/*
AED-TP5-PERIMETRO
	Gustavo Gaston Idoyaga / K1051 / Legajo:153969-5
	20150514
*/

#include <iostream>

using namespace std;

double h,b,f;

int main (){
  double getNroPOS(), getPER(double,double);
  cout << "Ingrese la Altura.\n";
  h=getNroPOS();
  cout << "Ingrese la Base.\n";
  b=getNroPOS();
  cout << "La altura es: "<< h << " y la base es: " << b << ".\n" << endl;
  cout << "El perimetro calculado es: " << getPER(b,h) << ".\n" << endl;
}

double getNroPOS(){
	cin>>f;
	while (f<=0){
		cin>>f;
	}
	return f;
}

double getPER(double base, double altura){
	return (2*(b+h));
}
