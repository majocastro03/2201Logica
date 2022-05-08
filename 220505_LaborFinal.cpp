/*Programa para llenar dos matrices, sumarlas e imprimirlas*/
#include <iostream>
using namespace std;
int main (int agrv, char** argc){
    int F = 3, C = 2, gsum=0, sum;
    //int  **A = new int **[F][C];
    int A[F][C];
    int B[F][C];
    int R[4][3];
    int P1[F][C];
    int P2[F][C];
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            A[i][j]=0;
            B[i][j]=0;
            R[i][j]=0; 
            P1[i][j]=0;
            P2[i][j]=0;
        } 
    }
    for(int i = 0; i<F; i++){
        sum = 0;
        for(int j = 0; j<C; j++){
            cout<<"Ingrese por favor la posicion "<<i<<","<<j<<" de la matriz A\n";
            cin>>A[i][j];
            cout<<"Ingrese por favor la posicion "<<i<<","<<j<<" de la matriz B\n";
            cin>>B[i][j];
            R[i][j]= A[i][j] + B[i][j];
            sum = sum +R[i][j];
            gsum = gsum+R[i][j];
            P1[i][j]=A[i][j]*1.2;
            P2[i][j]=B[i][j]*(1-0.1);
        }
        R[i][C]=sum;
    }  
    system ("cls"); 
    //eliminar lo que estaba antes en pantalla 
    cout<<"Matriz A\n";
    for(int m=0;m<F;m++){
        for(int n=0;n<C;n++){
            cout<<A[m][n]<<" ";
        }
        cout<<endl;
    }
     
    cout<<"Matriz B\n";
    for(int m=0;m<F; m++){
        for(int n=0; n<C;n++){
            cout<<B[m][n]<<" ";
        }
        cout<<endl;
    }
    cout<<"Suma de las matrices: \n";
    for(int m=0; m<4;m++){
        for(int n=0; n<3;n++){
            cout<<R[m][n]<<" ";
        }
        cout<<endl;
    }
    cout<<"Aumento del 20%\n";
    for(int m=0; m<3;m++){
        for(int n=0; n<2;n++){
            cout<<P1[m][n]<<" ";
        }
        cout<<endl;
    }
    cout<<"Disminuye 10%\n";
    for(int m=0; m<3;m++){
        for(int n=0; n<2;n++){
            cout<<P2[m][n]<<" ";
        }
        cout<<endl;
    }
        cout<<"La gran suma es: "<<gsum<<endl;
    return 0;
}