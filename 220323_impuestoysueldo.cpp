#include <iostream>
using namespace std; 
int main(int argc, char** argv) {
	int TN= 0;
	int TI = 0;
	int PS;
	int IVA;
	int S;
	int otro;
	do{
		cout<<"Ingrese el pago semanal: ";
		cin>>PS;
		IVA= 0;	
		S = (PS*4);
			
			if (S>800){
				IVA = (S*0.06);
			}else{
				if(S>700 && S <= 800){
					IVA = (S*0.04);
				}else{
					IVA = (S*0.02);
				}
			}
		TN = (TN +S);
		TI = (TI + IVA);
		cout<<"El sueldo total es: "<<S<<"\n";
		cout<<"El impuesto a cobrar es:"<<IVA<<"\n";
		cout<<"Desea otro empleado?:";
		cin>>otro;
	}while(otro==1);
	cout<<"La nomina total es:"<<TN<<"\n";
	cout<<"El impuesto total es:"<<TI<<"\n";
	return 0;
}