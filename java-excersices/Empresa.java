//Programador: Elviro Dominuez Soriano
//Programa: Empresa
//Fecha: 09/10/2018
//3°"A"

import java.util.*;
public class Empresa
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double sueldo;
      double faltas;
      double retardos;
      double sueldo_fin;
      System.out.println("¿Cual es tu sueldo?\n");
      sueldo=Sc.nextDouble();
      System.out.println("¿Cuantas faltas tienes\n");
      faltas=Sc.nextDouble();
      System.out.println("¿Cuantos retardos tienes\n");
      retardos=Sc.nextDouble();
      if(faltas<=0 && retardos<=0)
      {
      sueldo_fin=(((sueldo/100)*3)+sueldo);
      System.out.println("Tu suledo con aumento es: "+sueldo_fin);
      }else{
         sueldo_fin=(sueldo-((sueldo/100)*0.002));
         System.out.println("Tu sueldo con decremento es: "+sueldo_fin);
         }
    }
}