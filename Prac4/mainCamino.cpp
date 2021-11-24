#include <iostream>
#include "Punto.h"
using namespace std;


double camino(Punto *Lista, int tam){
double suma=0;
  for(int i=0; i<tam; i++){
    suma=suma+Lista[i].distancia(Lista[i+1]);
  }
return suma;

}




int main(){
  Punto p1(1,1);
  Punto p2(1,1);
  Punto p3(1,1);
  int tam=3;
  Punto Lista[tam]={p1,p2,p3};

  double sol= camino(&Lista[0], tam);

  cout<< sol;


}
