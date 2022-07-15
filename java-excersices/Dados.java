//Programador: Elviro Dominguez Soriano
//Programa: Dados
//Fecha: 06/NOV/2018
//3°"A"

import java.util.*;
public class Dados
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double num_dados=0;
      System.out.println("Dame el numero de dados con 6 considerando del 0 al 3\n");
      num_dados=Sc.nextDouble();
      if(num_dados==3){
         System.out.println("Excelente");
      }else if(num_dados==2){
         System.out.println("Muy bien");
      }else if(num_dados==1){
         System.out.println("Regular");
      }else{
         System.out.println("Pesimo");
      }
   }
}
