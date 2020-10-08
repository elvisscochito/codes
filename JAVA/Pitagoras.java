//programador: Elviro Dominguez Soriano
//Programa: Pitagoras
//Fecha:08/NOV/2018
//3°"A"

import java.util.*;
public class Pitagoras
{
   public static void main(String[] args)
   {
      Scanner Sc=new Scanner(System.in);
      double cata=0;
      double catb=0;
      double longitud=0;
      System.out.println("Dame la primera y segunda medida de los catetos:\n");
      cata=Sc.nextDouble();
      catb=Sc.nextDouble();
      longitud=(Math.sqrt(Math.pow(cata,2)+Math.pow(catb,2)));
      System.out.println("La longitud de la hipotenusa es: "+longitud);
   }
}
      