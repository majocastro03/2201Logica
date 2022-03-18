#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int i = 0;
	int S = 0;
	int N;
	int P;
	int nmr;
	cout<<"Ingrese un numero: \n";
	cin>>N;

	do{
		cout<<"Ingrese otro numero: \n";
		cin>>nmr;
		S = (S + nmr);
		i++;
	}while(i < N);
	
	P =(S / N);
	
	cout<<"El promedio es: \n"<<P;
	
	return 0;
}