//Programador: Elviro Dominguez Soriano
//Programa: pesos_dolares
//Fecha: 14/NOV/2018
//3°"A"

import java.util.*;
public class Pesos_dolares
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double cant_pesos=0;
      double cant_dolar=0;
      System.out.println("Introduce la cantidad que desa convertir a dolar:\n");
      cant_pesos=Sc.nextDouble();
      cant_dolar=(cant_pesos/22);
      System.out.println("Tu cantidad convertida a dolar es: "+cant_dolar);
   }
}
   

