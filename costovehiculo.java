import java.util.Scanner; 
public class costovehiculo {
	public static void main(String[] args){
	int gls,lln,act,mnt;
	Scanner leer= new Scanner(System.in);
	System.out.println("Ingrese el valor del costo de la gasolina:");
    gls = leer.nextInt();
    System.out.println("Ingrese el valor del costo de las llantas:");
    lln= leer.nextInt();
	System.out.println("Ingrese el valor del costo del aceite: ");
    act= leer.nextInt();
	System.out.println("Ingrese el valor del costo del mantenimiento:");
    mnt= leer.nextInt();
	leer.close();
	int cst =((gls*48)+(lln*1)+(act*2)+(mnt*4));
	System.out.println("El costo de un vehiculo anualmente es: " + cst);
	}
}