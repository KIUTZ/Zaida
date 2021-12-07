//---------------------------------------
// mainLejano
//Zaida Pastor González
//-------------------------------------

#include <iostream>
#include "Punto.h"
using namespace std;

//----------------------------------------
//Prueba automática
//----------------------------------------
void Prueba(Punto p1, Punto p2, Punto sol){
  if (sol.getX()==p2.getX() && sol.getY()==p2.getY()){ //Si sol = (-2,-5)
      cout<< "El programa se ha ejecutado correctamente";
    }
    else{
      cout<<"Ha ocurrido algún problema";
    }
}



//-----------------------------------
// Punto -> lejano() -> Punto
//-----------------------------------

Punto lejano(Punto p1, Punto p2){
  Punto origen;
  if(p1.distancia(origen)>p2.distancia(origen)){ //Si la distancia al origen del p1 es mayor que la de p2 (más lejano)
    return p1;
  }
  return p2;
}


//---------------------------------------
//main
//---------------------------------------

int main(){
  Punto p1(2,3);
  Punto p2(-2,-5);

  Punto sol=lejano(p1, p2);
  cout<< "El punto más lejano al origen es: ("<<sol.getX()<<","<<sol.getY()<< ")"<<"\n";

  Prueba(p1,p2,sol);

  }
