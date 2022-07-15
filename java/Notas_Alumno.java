//Programador: Jared y Elviro
//Programa: Notas_Alumno
//Fecha: 27/09/2018
//3°"A"

import java.util.*;
public class Notas_Alumno
{
   public static void main(String[] args)
   {
      Scanner entrada= new Scanner(System.in);
      
      String nombre_alumno;
      double evaluacion1;
      double evaluacion2;
      double evaluacion3;
      double evaluacion_final;
      
      System.out.println("Nombre alumno: \n");
      nombre_alumno=entrada.nextLine();
      System.out.println("Nota de la primera evaluacion: \n");
      evaluacion1=entrada.nextDouble();
      System.out.println("Nota de la segunda evaluacion: \n");
      evaluacion2=entrada.nextDouble();
      System.out.println("Nota de la tercera evaluacion: \n");
      evaluacion3=entrada.nextDouble();
      evaluacion_final=((evaluacion1+evaluacion2+evaluacion3)/3);
      System.out.println("La nota media de" +nombre_alumno+ "es:" +evaluacion_final);
   }
}
      
          
      
      