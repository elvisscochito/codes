//Programador: Jared y Elviro
//Programa: Circulo
//Fecha: 27/09/2018
//3°"A"

import java.util.Scanner;
public class Circulo
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double radio;
      double longitud;
      double area;
      
      System.out.println("Introduce el radio de la circunferencia: \n");
      radio=Sc.nextDouble();
      longitud=(2*Math.PI*radio);
      area=(Math.PI*Math.pow(radio,2));
      System.out.println("Longitud de la circunferencia es:" +longitud);
      System.out.println("El area de la circunferencia es:" +area);
   }
}