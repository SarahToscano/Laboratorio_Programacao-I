//============================================================================
// Name        : Sarah.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

using namespace std;

double inss(double valor, int desconto){

	double liquido, x;
	liquido =(desconto/100.0)*valor;


	return valor-liquido;

}

int main()
{
	double salario, desconto=0;

	cout<<"Digite seu salario:  ";
	cin >> salario;

	if(salario<=420){
		desconto=inss(salario, 8);
	}

	else if((salario>420) && (salario<=1350)){
		desconto=inss(salario, 9);
	}

	else{
		desconto=inss(salario, 10);
	}

	cout<<"Salario Liquido eh:  "<<desconto <<endl<<endl;
}
