#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int N;
 	int long long F= 1;
	int otro=1;
	
	cout<<"Ingrese un numero; \n";
	cin>>N;
	
	while(N>1){
	
	 F= (F*N);
	 N= (N-1);
	
}
	cout<<"Su factorial es: "<<F<<"\n";
	
	
	return 0;
}