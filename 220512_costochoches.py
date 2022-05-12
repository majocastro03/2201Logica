Cp = 0
R = 0
E = 0
El = [0,0,0,0,0]
P =[0,0,0]
V = [0,0,0,0]
C = [[0,0,0,0],
    [0,0,0,0],
    [0,0,0,0]]
for i in range (3):
    for j in range (4):
        C[i][j] = int(input(f"Ingrese la posicion: {i}{j}: "))
for i in range(3):
    P[i] = int(input("Ingrese la posicion {} del vector P: ".format(i)))
for i in range (4):
    V[i] = int(input("Ingrese la posicion {} del vector V: ".format(i)))
for i in range (4):
    j=0
    El[0] = C[j][i]*V[i]
    Cp = Cp + El[0]
coupe = Cp*P[0]
for i in range (4):
    j=1
    El[1] = C[j][i]*V[i]
    R = R + El[1]
ranchera = R*P[1]
for i in range (4): 
    j=2
    El[2] = C[j][i]*V[i]
    E = E + El[2]
economico = E*P[2]
print("Costos de un solo coche coupe: ", Cp, "\n")
print("Costos de un solo coche ranchera: ", R, "\n")
print("Costos de un solo coche economico: ", E, "\n")
print("Costos totales de ", P[0], " coches modelo coupe: ", coupe, "\n")
print("Costos totales de ", P[1], " coches modelo ranchero: ",ranchera, "\n")
print("Costos totales de ", P[2]," coches modelo economico: ", economico, "\n")
