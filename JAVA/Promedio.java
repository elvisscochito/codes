//Programador: Elviro Dominuez Soriano
//Programa: Promedio
//Fecha: 09/10/2018
//3°"A"

import java.util.*;
public class Promedio
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double promedio;
      System.out.println("Dame tu promedio considerado de 0 al 100\n");
      promedio=Sc.nextDouble();
      if(promedio>=85){
         System.out.println("Cumples con la competencia");
         }else
            System.out.println("Lo siento, no cumples con la competencia");
    }
}