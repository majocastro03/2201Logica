#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int N;
	int a;
	int b;
	int T;
	int otro;
	do {
	cout<<"Ingrese el primer termino:";
	cin>>a;
	cout<<"Ingrese el segundo termino:";
	cin>>b;
	cout<<"Si desea sumar ingrese 1 \nSi desea restar ingrese 2 \nSi desea multiplicar ingrese 3 \nSi desea dividir ingrese 4 \nSi desea el modulo ingrese 5 \n";
	cin>>N;
	switch(N){
	
		case 1: 
		T =(a+b);
			cout<<"la suma es:"<<T<<"\n";
		break;
		case 2: 
		T = (a-b);
			cout<<"La resta es:"<<T<<"\n";
		break;
		case 3: T = (a*b);
			cout<<"La multiplicacion es:"<<T<<"\n";
		break;
		case 4: T = (a/b);
			cout<<"La division es:"<<T<<"\n";
		break;
		case 5: T = (a%b);
			cout<<"El modulo es:"<<T<<"\n";
		break;
		default: cout<<"No elegio una opcion valida\n";
			}
	cout<<"Si desea hacer otra operacion ingrese 1: ";
	cin>>otro;
	}while(otro==1);
	
	return 0;
}
