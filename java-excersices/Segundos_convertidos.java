//programador: Elviro Dominguez Soriano
//Programa: Segundos_convertidos
//Fecha:08/NOV/2018
//3°"A"

import java.util.*;
public class Segundos_convertidos
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double seg=0, sem=0, dia=0, hora=0;
      System.out.println("Introduce la cantidad de segundos a convertir:\n");
      seg=Sc.nextDouble();
      sem=(seg/604800);
      dia=(seg/86400);
      hora=(seg/3600);
      System.out.println("Las semanas son: "+sem);
      System.out.println("Los dias son: "+dia);
      System.out.println("Las horas son: "+hora);
      System.out.println("Y los segundos son: "+seg);
   }
}
      