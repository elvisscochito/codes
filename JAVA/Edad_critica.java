//programador: Elviro Dominguez Soriano
//Programa: Edad_critica
//Fecha: 14/NOV/2018
//3°"A"

import java.util.*;
public class Edad_critica
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      int edad=0;
      System.out.println ("Ingrese su edad actual:\n");
      edad=Sc.nextInt();
      switch (edad) {
      case 0:
      System.out.println ("Acaba de nacer hace poco. No ha cumplido el anio");
      break;
      case 18: System.out.println ("Está justo en la mayoría de edad"); break;
      case 65: System.out.println ("Está en la edad de jubilacion"); break;
      default: System.out.println ("La edad no es critica"); break;
      }
   }
}