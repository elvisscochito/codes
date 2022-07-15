//Programador: Jared y Elviro
//Programa: Calcular_Edad
//Fecha: 03/10/2018
//3°"A"

import java.util.*;
public class Calcular_Edad
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double edad;
      double anio_nac;
      double anio_act;
      String nombre;
      System.out.println("Introduce tu nombre\n");
      nombre=Sc.nextLine();
      System.out.println("Introduce el anio actual\n");
      anio_act=Sc.nextDouble();
      System.out.println("Introduce tu anio de nacimiento\n");
      anio_nac=Sc.nextDouble();
      edad=(anio_act-anio_nac);
      System.out.println("Tu edad "+nombre+" es de: "+edad+" anios");
   }
}