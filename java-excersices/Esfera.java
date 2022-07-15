//programador: Elviro Dominguez Soriano
//Programa: Esfera
//Fecha:08/NOV/2018
//3°"A"

import java.util.*;
public class Esfera
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double radio=0, volumen=0;
      System.out.println("Introduce el radio de la esfera\n");
      radio=Sc.nextDouble();
      volumen=(((1.333333333333333)*Math.PI)*radio*radio*radio);
      System.out.println("El volumen de tu esfera es: "+volumen);
   }
}