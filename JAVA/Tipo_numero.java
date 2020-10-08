//Programador: Elviro Dominguez Soriano
//Programa: Tipo_numero
//Fecha:13/NOV/2018
//3°"A"

import java.util.*;
public class Tipo_numero
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double num=0, neg=0, neu=0, pos=0;
      for(int i=1;i<=20;i++){
         System.out.println("Introduce 1 numero random: \n");
         num=Sc.nextDouble();
         if(num<0){
            neg++;
         }else if(num==0){
            neu++;
         }else if(num>0){
            pos++;
         }
      }
      System.out.println("Los numeros negativos son: "+neg);
      System.out.println("Los numeros neutros son: "+neu);
      System.out.println("Los numeros positivos son: "+pos);
      
   }
}
