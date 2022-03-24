#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int x;
	int a;
	int b;
	int r;
	int t;
	int otro;
	int cntI=0;
	do{
	t = 2;
	cout<<"Ingrese donde inicia\n";
	cin>>a;
	cout<<"Ingrese donde finaliza\n";
	cin>>b;
	r = a;
	if(a<b){
	
	for(int i=a+1; i<=b;i++){
		if (t%2==0){ 
		x = 1;	
		}else{
		x = -1;
		}
		r = (r+(x*i));
	
		t = (t+1);
		
	}
	cout<<"El resultado es:"<<r<<"\n";
			} else {
	cout<<"Numero incorrecto no sea machaco\n";
					}	cout<<"Desea probar de nuevo ingrese 1:\n";
	cin>>otro;
	cntI = (cntI+1);
	}while(cntI<3 && otro==1); 
	
	return 0;
}
