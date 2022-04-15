"""promedio de notas de estudiantes"""
otro = 1
while(otro==1):
		i = 0
		sT = 0
		print("Bienvenido al programa que permite calcular el promedio de notas de varios estudiantes\n")
		cntE = int(input("Por favor ingrese la cantidad de estudiantes a los que desea calcular el promedio:\n"))
		cntN = int(input("Por favor ingrese la cantidad de notas:\n"))
		while i<cntE :
			s = 0
			p = 0
			j = 0
			i = i+1
			while j<cntN :
				nmr = int(input("Por favor ingrese la nota\n"))
				s = s+nmr
				j = j+1
			p = s/cntN
			sT = sT+p
			print("el promedio del estudiante es",p) 
		pT = sT/cntE
		print("el promedio total de los",cntE, "estudiantes es",pT) 
		otro = int(input("Si desea calcular otros promedios digite 1:\n"))