"""Programa fibonacci"""
Vct = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0] ###rango del vector
i = int(input("ingrese la cantidad de posiciones que desea tenga el vector\n"))
Vct.append(i) ###el limite del vector lo establece el usuario
Vct[0] = 0
Vct[1] = 1
"""x=2
while(x<=i):
    Vct[x]= Vct[x-1]+Vct[x-2]
    x = x+1"""
for x in range (2,i+1 ): ###for con más de un parametro, en este caso rango e inicio del contador
	
	Vct[x]= Vct[x-1]+Vct[x-2]
while(i>=0):
    print("Posicion Fibonacci",Vct[i])
    i= i-1