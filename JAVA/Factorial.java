//Programador: Elviro Dominguez Soriano
//Programa: Factorial
//Fecha: 06/NOV/2018
//3°"A"

import java.util.*;
public class Factorial
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double a=1;
      double numfac=0;
      System.out.println("Dame el numero al que le quieres sacar el factorial:\n");
      numfac=Sc.nextDouble();
      for(int i=1;i<=numfac;i++)
      {
         a=a*i;
         System.out.println(a);
      }
   }
}