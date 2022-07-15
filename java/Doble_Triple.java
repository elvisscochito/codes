//Programador: Elviro Dominguez Soriano
//Programa: Doble_Triple
//Fecha: 03/10/2018
//3°"A"

import java.util.*;
public class Doble_Triple
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double numero;
      double doble;
      double triple;
      System.out.println("Dame un numero\n");
      numero=Sc.nextDouble();
      doble=(numero+numero);
      triple=(numero+numero+numero);
      System.out.println("El doble de tu número es: "+doble+" y el triple es: "+triple);
    }
}