//programador: Elviro Dominguez Soriano
//Programa: Numero_cifras
//Fecha: 03/DIC/2018
//3°"A"

import java.util.*;
public class Numero_cifras
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      int numd;
      int nc1=1, nc2=2, nc3=3, nc4=4;
      System.out.println("Dame un numero entero positivo del cual quieres determinar el numero de cifras");
      numd=Sc.nextInt();
      if (numd>=0 && numd<=9)
      {
         System.out.println("Tu numero entero positivo tiene: "+nc1+" cifras");
      }else if(numd>=10 && numd<=99)
      {
         System.out.println("Tu numero entero positivo tiene: "+nc2+" cifras");
      }else if(numd>=100 && numd<=999)
      {
         System.out.println("Tu numero entero positivo tiene: "+nc3+" cifras");
      }else if(numd>=1000 && numd<=9999)
      {
         System.out.println("Tu numero entero positivo tiene: "+nc4+" cifras");
      }
   }
}
      