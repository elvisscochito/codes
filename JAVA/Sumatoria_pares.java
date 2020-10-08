//Programador: Elviro Dominguez Soriano
//Programa: Sumatoria_pares
//Fecha: 15/NOV/2018
//3°"A"

import java.util.*;
public class Sumatoria_pares
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      int n=0;
      int m=0;
      int ident=0;
      int sumat_par=0;
      System.out.println("Ingresa el primer numero n:\n");
      n=Sc.nextInt();
      System.out.println("Ingresa el segundo numero m:\n");
      m=Sc.nextInt();
      for(ident=n;ident<=m;ident++)
      {
         if(ident%2==0)
         {
            sumat_par=(sumat_par+ident);
         }
      }
      System.out.println("La suma de los numeros pares de "+n+" a "+m+" es: "+sumat_par);
   }
}
            