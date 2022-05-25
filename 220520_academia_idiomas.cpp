/*Programa que permite obtener los ingresos de una academia de idiomas según los cursos que ofrece*/
#include <iostream>
using namespace std;
int main(int argv, char**argc){
    int A[4][2];
    double B[2][4];
    int T[10], precio[5], idioma[5], cursos[5];
    int i, j,TOTAL;
    for(int i=0; i<5; i++){
        idioma[i]= 0;
        cursos[i]=0;
        precio[i]=0;
    }
    cout<<"Ingrese el precio (en euros) por persona para grupo reducido ";
    cin>>precio[1];
    cout<<"Ingrese el precio (en euros) por persona para grupo normal: ";
    cin>>precio[2];
    //llenar la matriz A
    for(int i=0; i<4; i++){
        for(int j=0;j<2; j++){
            cout<<"ingrese el valor de la matriz A en posicion "<<i<<","<<j<<"\n";
            cin>>A[i][j];
        }
    }
    //Llenar la matriz B
    for(int i=0; i<2; i++){
        for(int j=0;j<4; j++){
            cout<<"ingrese el valor (en numeros decimales) de la matriz B en posicion "<<i<<j<<"\n";
            cin>>B[i][j];
        }
    }
    for(int i=0; i<4;i++){
        for(int j=0; j<1; j++){
            T[i] = A[i][j]+A[i][j+1];
        }
    }
    i = 1;
    for(int k =0; k<4; k++){
        cout<<"la cantidad de alumnos del nivel "<<i<<" es: "<<T[k]<<"\n";
        i = i +1;
    }
    for(int i=0; i<4; i++){
        j = 1;
        idioma[1] = idioma[1] + A[i][j]; 
    }
    cout<<"Estudiantes de aleman curso normal: "<<idioma[1]<<"\n"; 
    //sacar estudiantes de curso normal (ingles y aleman) idioma[3]
    for(int i=0; i<4;i++){
        idioma[2]= idioma[2]+(A[i][0]* B[1][i]);
    }
    idioma[3] = idioma[2]+idioma[1];
    cout<<"Estudiantes en el curso de ingles normal: "<<idioma[2]<<"\n";
    //idioma[2] estudiantes ingles normal
    //cantidad total de estudiantes de ingles 
    for(int i=0; i<4; i++){
        idioma[4] = idioma[4] + A[i][0];
    }
    cout<<"Estudiantes en el curso de ingles: "<<idioma[4]<<"\n";
    //idioma[5] estudiantes de ingles reducido
    idioma[5]= idioma[4]-idioma[2];
    cout<<"Cantidad de estudiantes de curso de ingles reducido: "<<idioma[5]<<"\n";
    cursos[1] = idioma[1]*precio[2]; //ingresos por idioma aleman curso normal
    cursos[2] = idioma[2]*precio[2]; //ingresos por ingles curso normal
    cursos[3]= idioma[5]*precio[1]; //ingresos de ingles reducido
    TOTAL = cursos[2]+cursos[3]+cursos[1];
    cout<<"Total ingresos para la academia de idiomas: "<<TOTAL;
    return 0;
}