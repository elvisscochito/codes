//programador: Elviro Dominguez Soriano
//Programa: Mini_calculadora
//Fecha: 14/NOV/2018
//3°"A"

import java.util.*;
public class Mini_calculadora
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      int a=0;
      int b=0;
      int op=0;
      System.out.print("Ingrese el valor de a:\n");
      a=Sc.nextInt();
      System.out.print("Ingrese el valor de b:\n");
      b=Sc.nextInt();
      System.out.print("Ingrese la operacion a ejecutar:\n");
      op=Sc.nextInt();
      switch (op){
      case 1:
           System.out.println(a+b);
           break;
      case 2:
           System.out.println(a-b );
           break;
      case 3:
           System.out.println(a*b);
           break;
      case 4:
           System.out.println(a/b);
           break;
      default:
           System.out.println("error");
           break;
      }
   }
}