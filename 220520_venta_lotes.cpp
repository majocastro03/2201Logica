#include <iostream>
using namespace std;
int main(int argv, char**argc){
    int otro, estado_producto[200];
    int i = 0,j=0, feo=0, regular=0, bueno=0, porcentaje[4], precio_lote;
    cout<<"Bienvenido al analisis de venta de su lote\n";
    cout<<"Por favor ingrese el valor de compra del lote:\n";
    cin>>precio_lote;
    do{
        cout<<"ingrese el estado del producto.\n*Si es feo ingrese 0. \n*Si es regular ingrese 1\n*Si es bueno ingrese 2\n";
        cin>>estado_producto[i];
        i = i+1;
        cout<<"si desea ingresar otro producto presione 1: \n";
        cin>>otro;
    }while(otro ==1 && i<200);
    while(j <= i){
        switch (estado_producto[j])
        {
        case 0:
            feo = feo + 1;
            break;
        case 1:
            regular = regular +1;
            break;
        case 2: 
            bueno = bueno +1;
            break;
        default:
            break;
        }
        j = j +1;
    }
    porcentaje[0] = feo*100/i;
    porcentaje[1] = 100*regular/i;
    porcentaje[2] = 100*bueno/i;
    cout<<"El porcentaje de feo es: "<<porcentaje[0]<<endl;
    cout<<"El porcentaje de regular es: "<<porcentaje[1]<<endl;
    cout<<"El porcentaje de bueno es: "<<porcentaje[2]<<endl;
    if(porcentaje[0]>15){
        cout<<"El lote no se compra\n";
    }else{
        if(porcentaje[1]<10){
            precio_lote = precio_lote*0.7;
            cout<<"el lote se compra a: "<<precio_lote<<endl;
        }else{
        if(porcentaje[2]>70){
                cout<<"El lote se compra al precio original\n";
            }
        }
    }
    cout<<"la cantidad de productos en mal estado es: "<<feo<<endl;
    cout<<"la cantidad de productos en estado regular es: "<<regular<<endl;
    cout<<"la cantidad de productos en buen estado es: "<<bueno<<endl;
    return 0;
}