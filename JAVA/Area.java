//Programador: Elviro Dominguez Soriano
//Programa: Area
//Fecha: 03/10/2018
//3°"A"

import java.util.*;
public class Area
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double lado_cua;
      double area;
      System.out.println("Dame la medida de un lado del cuadrado\n");
      lado_cua=Sc.nextDouble();
      area=(lado_cua*lado_cua);
      System.out.println("El area de tu cuadrado es:"+area);
   }
}