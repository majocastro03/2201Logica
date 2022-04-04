"""Programa que permite calcular el costo anual de varios vehiculos de manera individual con while"""
print("BIENVENIDO AL PROGRAMA QUE CALCULA EL COSTO ANUAL DE UN VEHICULO\n")
otrovhcl = 1
while(otrovhcl==1):
    cst = 0
    gls = int(input("Ingrese el valor del costo de la gasolina:"))
    lln = int(input("Ingrese el valor del costo de las llantas: "))
    act = int(input("Ingrese el valor del costo del aceite: "))
    mnt = int(input("Ingrese el valor del costo del mantenimiento: "))
    cst=((gls*48)+(lln*1)+(act*2)+(mnt*4));
    print("El costo de un vehiculo anualmente es: ",cst)
    otrovhcl = int(input("Si desea calcular otro vehiculo ingrese 1: "))
