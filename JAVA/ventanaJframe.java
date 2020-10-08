//programador: Elviro Dominguez Soriano
//Programa: ventanaJframe
//Fecha: 06/DIC/2018
//3°"A"

import javax.swing.JFrame;
public class ventanaJframe{
   public static void main(String[] args){
      ventanaJframe ventana=new ventanaJframe("Ventana Creada");
   }
   public ventanaJframe(String titulo){
      JFrame ventanaM=new JFrame(titulo);
      ventanaM.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//Finaliza el programa cuando se da click en la x
      ventanaM.setSize(290,150);//Configurando tamaño de la ventana
      ventanaM.setVisible(true);//Configurando visualización de la ventana
   }
}