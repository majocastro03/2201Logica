#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int N;
 	int long long F= 1;
 	
 	cout<<"Ingrese un numero; \n";
	cin>>N;
	
	for(int n = N; n > 1; n-- ){
		F= (F*n);
	}
	cout<<"Su factorial es: "<<F<<"\n"; 
	return 0;
}
