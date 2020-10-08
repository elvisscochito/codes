//Programador: Jared y Elviro
//Programa: Sueldo 
//Fecha: 27/09/2018
//3°"A"

import java.util.*;
public class Sueldo
{
   public static void main(String[] args)
   {
      Scanner entrada=new Scanner(System.in);
      int horas;
      int sueldo;
      System.out.println("¿Cuantas horas has trabajado este mes?\n");
      horas=entrada.nextInt();
      sueldo=(horas*10);
      System.out.println ("Tu sueldo este mes es de:" +sueldo+ "Euros\n");
   }
}