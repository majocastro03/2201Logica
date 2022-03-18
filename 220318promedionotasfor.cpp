#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int S = 0;
	int P;
	int nmr;
	int N;
	cout<<"Ingrese la cantidad de estudiantes : \n";
	cin>>N;
	
	for (int i= 0; i <N; i++){
		
		cout<<"Ingrese la nota: \n";
		cin>>nmr;
		S = (S + nmr);
	}
	P = (S / N);
	
	cout<<"El promedio es: \n"<<P;
	
	
	return 0;
}