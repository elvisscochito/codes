//Programador: Elviro Dominguez Soriano
//Programa: Conversion_positiva
//Fecha:13/NOV/2018
//3°"A"

import java.util.*;
public class Conversion_positiva
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double num_neg=0,con_pos=0;
      for(int i=1;i<=5;i++){
         System.out.println("Introduce 1 numero negativo: \n");
         num_neg=Sc.nextDouble();
         con_pos=(num_neg*-1);
         System.out.println("Tu numero negativo converetido a postivo es: "+con_pos);
      }
    }
}
