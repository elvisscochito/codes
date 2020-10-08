//Programador: Elviro Dominguez Soriano
//Programa: Black_friday
//Fecha:13/NOV/2018
//3°"A"

import java.util.*;
public class Black_friday
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double cantidad=0;
      double descuento=0;
      System.out.println("Introduce la cantidad comprada:\n");
      cantidad=Sc.nextDouble();
      if(cantidad>1000){
         descuento=(cantidad-(cantidad/100));
         System.out.println("El descuento de tu cantidad es: "+descuento);
      }else{
         System.out.println("Tu compra se conserva en: "+cantidad); 
      } 
   }
}