"""
PROGRAMA QUE GENERA VOTOS DE MANERA ALEATORIA ENTRE 1 Y 2, E IMPRIME QUIEN GANA"""
import random
a = 0
b= 0
Cntvoto = int(input("¿Cuantos votos son?: "))
for i in range (Cntvoto):
    voto = random.randint(1, 2)
    if (voto ==1):
        a = a +1
    else:
        b = b+1
if (a<b):
    print("Gana Fico \n")
else: 
    print("Gana Petro:)")
"""
PROGRAMA QUE PIDE EL VOTO, CUENTA LOS VOTOS E IMPRIME EL GANADOR"""
a = 0
b = 0
V = []
Cntvotos = int(input("¿Cuantos votos desea?: "))
for i in range (Cntvotos):
    V.append(Cntvotos)
    V[i] = int(input("1. Petro\n2. Fico\n"))
for j in range (Cntvotos):
    if(V[j]==1):
        a = a +1
    else: 
        b = b + 1
if (a<b):
    print("Gana Fico \n")
else: 
    if (a==b):
        print("Empate")
    else: 
        print("Gana Petro:)")


