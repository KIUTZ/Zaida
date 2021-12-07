//---------------------------------------
// mainCamino
//Zaida Pastor González
//-------------------------------------
#include <iostream>
#include "Punto.h"
using namespace std;

//----------------------------------------
//Prueba automática
//----------------------------------------
void Prueba(double sol){
  if(sol == 2,82843){
    cout<<"El programa se ha ejecutado correctamente";
  }
  else{
    cout<<"Ha ocurrido algún problema";
  }
}

//-----------------------------------
// [Punto] -> camino() -> R
//-----------------------------------

double camino(Punto *Lista, int tam){
double suma=0;
  for(int i=0; i<tam; i++){
    suma=suma+Lista[i].distancia(Lista[i+1]); //Calcula la distancia entre cada uno de los puntos de la lista y los suma
  }
return suma;

}


//--------------------------------------------------
//Función main
//--------------------------------------------------
int main(){
  int tam=3;
  Punto p1(1,1);
  Punto p2(2,2);
  Punto p3(3,3);
  Punto Lista[tam]={p1,p2,p3};

  double sol = camino(&Lista[0], tam);
  cout<< "La distancia entre ambos puntos es "<<sol<< "\n";

  Prueba(sol);

}
