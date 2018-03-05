//============================================================================
// Name        : fibo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void Soma(int n)
{
	int num[n];

	num[0]=1;
	if(n>=1){
		num[1]=1;

		for(int i=2;i<n;i++){
			num[i]=num[i-2]+num[i-1];
		}
	}
	for(int j=0; j<n; j++)
		cout<<num[j]<<" ";

}

int main() {

	int n;
	cout << "Digite a quantidade da sequencia de numeros fibonacci que voce deseja visualizar:  ";
	cin>>n;

	Soma(n);

	return 0;
}
