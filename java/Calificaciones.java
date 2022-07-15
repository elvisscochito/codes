//programador: Elviro Dominguez Soriano
//Programa: Calificaciones
//Fecha: 07/DIC/2018
//3°"A"
import java.util.*;
public class Calificaciones 
{
   public static void main(String[] args)
   {
       Scanner Sc=new Scanner(System.in);
       double calif=0;
       double acum=0;
       double prom=0;
       for(int i=1;i<=4;i++)
       {
           System.out.println("Introduce tu calificacion:\n");
            calif=Sc.nextDouble();
            acum=(acum+calif);
            prom=(acum/4);
      }
      System.out.println("Tu promedio es: "+prom);
   }
}