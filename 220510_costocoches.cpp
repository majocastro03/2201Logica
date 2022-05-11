/*Costos requeridos para coches dependiendo el modelo, apartir de matrices ya establecidas*/
#include <iostream>
using namespace std;
int main(int argv, char** argc){
    int C[3][4];
    int P[3];
    int V[4];
    int j;
    //int C1, C2, C3;
    int Cp=0, coupe, R=0, ranchera, economico, E=0;
    int El[5];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"Ingrese la posicion: "<<i<<","<<j<<" ";
            cin>>C[i][j];
        }
    }
    for(int i=0; i<3;i++){
        cout<<"Ingrese la posicion "<<i<<" del vector P: ";
        cin>>P[i];
    }
    for(int i=0;i<4;i++){
        cout<<"Ingrese la posicion "<<i<<" del vector V: ";
        cin>>V[i];
    }
    for(int i=0; i<4;i++){
        j=0;
        El[0] = C[j][i]*V[i];
        Cp = Cp + El[0];
    }
    coupe = Cp*P[0];
    for(int i=0; i<4;i++){
        j=1;
        El[1] = C[j][i]*V[i];
        R = R + El[1];
    }
    ranchera = R*P[1];
    for(int i=0; i<4;i++){
        j=2;
        El[2] = C[j][i]*V[i];
        E = E + El[2];
    }
    economico = E*P[2];
    cout<<"Costos de un solo coche coupe: "<<Cp<<"\n";
    cout<<"Costos de un solo coche ranchera: "<<R<<"\n";
    cout<<"Costos de un solo coche economico: "<<E<<"\n";
    cout<<"Costos totales de "<<P[0]<<" coches modelo coupe: "<<coupe<<"\n";
    cout<<"Costos totales de "<<P[1]<<" coches modelo ranchero: "<<ranchera<<"\n";
    cout<<"Costos totales de "<<P[2]<<" coches modelo economico: "<<economico<<"\n";
    return 0;
}