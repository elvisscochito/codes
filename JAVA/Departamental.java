//Programador: Elviro Dominuez Soriano
//Programa: Departamental
//Fecha: 09/10/2018
//3°"A"

import java.util.*;
public class Departamental
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double compra;
      double descuento;
      System.out.println("Dame el total de tu compra\n");
      compra=Sc.nextDouble();
      if(compra>1000 && compra<3000)
      {
         descuento=(compra/100)*5;
         System.out.println("El descuento de tu compra es: "+descuento);
      }else if (compra==500){
         descuento=((compra/100)*2);
         System.out.println("El descuento de tu compra es: "+descuento);
      }else
         System.out.println("Lo sentimos tu compra no tiene descuento");
   }
}
      