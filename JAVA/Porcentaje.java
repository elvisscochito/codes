//Programador: Elviro Dominuez Soriano
//Programa: Porcentaje
//Fecha: 09/10/2018
//3°"A"

import java.util.*;
public class Porcentaje
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double total_alum;
      double num_hom, por_hom;
      double num_muj,por_muj;
      System.out.println("Dame el total de alumnos\n");
      total_alum=Sc.nextDouble();
      System.out.println("Dame el total de hombres\n");
      num_hom=Sc.nextDouble();
      System.out.println("Dame el total de mujeres\n");
      num_muj=Sc.nextDouble();
      por_hom=((num_hom*100)/total_alum);
      System.out.println("El porcentaje de hombres es: "+por_hom);
      por_muj=((num_muj*100)/total_alum);
      System.out.println("El porcentaje de mujeres es: "+por_muj);
   }
}