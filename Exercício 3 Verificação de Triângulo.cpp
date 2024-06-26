#include <iostream>

using namespace std;
float valor1, valor2, valor3, triangulo, equilatero, isosceles, escaleno;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\n Insira o primeiro valor: ";
	cin>>valor1;
	cout<<"\n\n Insira o segundo valor: ";
	cin>>valor2;
	cout<<"\n\n Insira o terceiro valor: ";
	cin>>valor3;
	
	if ((valor1 < (valor2 + valor3)) || (valor2 < (valor1 + valor3)) || ((valor3 < valor1 + valor2))){
		cout<<"\n\n  Os números que você inseriu formam um triangulo";
	}
	if ((valor1 == valor2) && ( valor1 == valor3) && (valor2 == valor3)){
		cout<<"\n\n  Os números que você inseriu formam um equilatero";
	}
	
	if ((valor1 == valor2) || ( valor1 == valor3) || (valor2 == valor3)){
		cout<<"\n\n  Os números que você inseriu formam um isosceles";
	}
	if ((valor1 != valor2) && ( valor1 != valor3) && (valor2 != valor3)){
		cout<<"\n\n  Os números que você inseriu formam um escaleno";
	}
	
	cout<<"\n\n\n";
}