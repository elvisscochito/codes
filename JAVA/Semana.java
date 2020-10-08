//programador: Elviro Dominguez Soriano
//Programa: Semana
//Fecha: 04/DIC/2018
//3°"A"

import java.util.*;
public class Semana
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      int numdia=0;
      System.out.println("Introduce el dia del numero de la smana considerandolos entre 1 y 7\n");
      numdia=Sc.nextInt();
      switch(numdia)
      {
         case 1:
            System.out.println("Es un dia laboral");
            break;
         case 2:
            System.out.println("Es un dia laboral");
            break;
         case 3:
            System.out.println("Es un dia laboral");
            break;
         case 4:
            System.out.println("Es un dia laboral");
            break;
         case 5:
            System.out.println("Es un dia laboral");
            break;
         default:
            System.out.println("Es un dia de fin de semana");
            break;
      }                                        
   }
}
      