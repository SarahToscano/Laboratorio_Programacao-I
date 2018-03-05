//============================================================================
// Name        : palindromo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	//string palavra, Copia;
	char palavra[100], Copia[100];
	int n, j=0, i, erro=0;

	cout << "Digite a palavra:  ";
	cin>>palavra;
	n=strlen(palavra);
	strcpy(Copia, palavra);

	for(i=n-1; j<n; i--)
	{
		j++;
		if(palavra[j]!=Copia[i])
		{
			erro++;
		}

	}
	if(erro)
		cout<<"Nao eh palindromo"<<endl;
	else
		cout<<"Eh"<<endl;

	return 0;
}
