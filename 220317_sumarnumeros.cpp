#include <iostream>
#include <string.h>
#include <sstream> 
using namespace std; 
int main(int argc, char** argv) {
	int N, I, S, otro=1;
	while(otro==1){
		S = 0;
		I = 1;
	cout<<"Ingrese la cantidad de veces que quiere que un numero se sume a sus anteriores \n";
	cin>>N;
	for (int I = 1; I <= N; I++){	
		S = (S + I);
	}
	while(I<N){
		cout<<I<<"+";
		I = I+1;
	}
	cout<<I<<"="<<S<<endl;
	cout<<"Si desea otra suma ingrese 1\n";
	cin>>otro;
	}
	return 0;
}
	