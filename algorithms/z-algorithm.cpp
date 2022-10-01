#include<iostream>
using namespace std;

/**
- @author Elviro Dominguez Soriano A01424591, Ramiro Yoshua Francisco Gonzalez Davila A01422501
- Parnorama general: Algoritmo Z en el que se busca un subpatron en un texto que el usuario indica
generando  un texto compuesto por el patron y el texto original y buscando las ocurrencias.
- @date Aug 30, 2022
- complexity: O(m+n)
*/

//FUNCION QUE REVISA LAS OCURRENCIAS DEL PATRON EN EL STRING COMPUESTO
//
void createZarray(string str, int Z[]){
   int n = str.length();
   int L, R, k;
   L = R = 0;
   for (int i = 1; i < n; ++i){
      if (i > R){
         L = R = i;
         while (R<n && str[R-L] == str[R])
         R++;
         Z[i] = R-L;
         R--;
      } else {
         k = i-L;
         if (Z[k] < R-i+1)
            Z[i] = Z[k];
         else {
            L = i;
            while (R<n && str[R-L] == str[R])
               R++;
            Z[i] = R-L;
            R--;
         }
      }
   }
}

//CREACION DEL STRING CON EL PATRON Y EL STRING ORIGINAL
void zAlgorithm(string text, string pattern){
  string str = pattern+"$"+text;
  int len = str.length();
  int Z[len];
  createZarray(str, Z);
  int impresion = 0;
  
  cout<<"El patron se encuentra en los indices:"<<endl;
   for (int i = 0; i < len; ++i){
      if (Z[i] == pattern.length()){
        cout<<(i-pattern.length()-1)<<"\t";
        impresion++;
      }
   }
  if(impresion==0){
    cout<<"No hay coincidencias"<<endl;
  }
}

//FUNCION MAIN DONDE SE PIDEN EL TEXTO ORIGINAL Y EL PATRON PARA ENCONTRAR CONICIDENCIAS
int main(){
  
  string str, pattern;
  cout<<"Ingrese el texto original:"<<endl;
  getline(cin,str);
  cout<<"Ingrese el patron a buscar:"<<endl;
  cin>>pattern;
  
  zAlgorithm(str, pattern);
  return 0;
}