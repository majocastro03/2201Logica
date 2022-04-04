"""programa que calcula si un numero es par o impar y cuenta 
    la cantidad de pares e impares ingresados, exceptuando el 0"""
otro=1; 
CntPrs = 0;
CntImp = 0;
while (otro==1):
        n = int(input("Ingrese un numero: "))
        while(n!=0):
            if (n%2==0):
                print("El numero es par \n")
                CntPrs = CntPrs + 1 
                break    
            else:
                CntImp = CntImp + 1 
                print("El numero es impar \n")
                break
        otro = int(input("Oprima 1 para continuar: "))
print("La cantidad de Par es:", CntPrs)
print("La cantidad de Impar es:", CntImp)