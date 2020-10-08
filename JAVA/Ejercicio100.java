//Programador: Elviro Dominguez Soriano
//Programa: Ejercicio100
//Fecha: 15/NOV/2018
//3°"A"

import java.util.*;
public class Ejercicio100
{
   public static void main(String[]args)
   {
      Scanner entrada=new Scanner(System.in);
      int numero=0,digito=0, suma=0;
      System.out.println("Ingresar numero\n");
      numero=entrada.nextInt();
      while(numero!=0)
      {
         digito=(numero%10);
         suma=(suma+digito);
         numero=(numero/10);
      }
      System.out.println("La suma de digitos es: "+suma);
   }
}

    

