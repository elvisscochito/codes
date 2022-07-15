//programador: Elviro Dominguez Soriano
//Programa: Cifras
//Fecha:08/NOV/2018
//3°"A"

import java.util.*;
public class Cifras
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      int num=0, num1=0, num2=0, num3=0;
      System.out.println("Introduce un numero de 3 cifras\n");
      num=Sc.nextInt();
      num1=(num/100);
      num2=((num-(num1*100))/10);
      num3=((num-(num1*100))-(num2*10));
      System.out.println("Las primer cifra de tu numero es: "+num1+" la segunda es: "+num2+" y la tercera es: "+num3);
   }
}