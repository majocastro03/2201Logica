import java.util.Scanner;
public class parimpar {
    public static void main(String[] args) throws Exception {
	Scanner leer= new Scanner(System.in);
	int CntP = 0;
	int CntI = 0;
	int n; 
	int otro=1;
	do {
		System.out.println("ingrese un numero:");
		n = leer.nextInt();
		if (n!=0){
			if(n%2==0){
			System.out.println("El numero es par \n");
			CntP= (CntP+1);
			}
		else{
			System.out.println("El numero es impar \n");
			CntI = (CntI + 1);
		}
	}
	System.out.println("Si desea ingresar otro numero por favor ingrese 1\n");
	otro = leer.nextInt();
	}  while(otro==1);
	System.out.println("La cantidad de Pares es:"+ CntP);
	System.out.println("La cantidad de impares es:"+ CntI);
	leer.close();
    }
}