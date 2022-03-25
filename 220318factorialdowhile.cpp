
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int N;
 	int long long F;
	int otro=1;
    do{
    F = 1;
	cout<<"Ingrese un numero: \n";
	cin>>N;
    do{ 
	 F= (F*N);
	 N= (N-1);
    }while(N > 1);
    cout<<"Su factorial es: "<<F<<"\n";
    cout<<"Si desea otro ingrese 1: ";
    cin>>otro;
    }while(otro==1);
	return 0;
}

