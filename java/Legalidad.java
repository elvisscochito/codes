//Programador: Elviro Dominuez Soriano
//Programa: Legalidad
//Fecha: 04/10/2018
//3°"A"

import java.util.*;
public class Legalidad
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      String nombre;
      double edad;
      System.out.println("Ingresa tu nombe\n");
      nombre=Sc.nextLine();
      System.out.println("Ingresa tu edad actual\n");
      edad=Sc.nextDouble();
      if (edad>=18)
         System.out.println("Eres ciudadano "+nombre);
         else
         System.out.println("No cumples la mayoria de edad "+nombre);
    }
}