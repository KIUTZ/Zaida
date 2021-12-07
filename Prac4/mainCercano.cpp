//---------------------------------------
// mainCercano
//Zaida Pastor González
//-------------------------------------
#include <iostream>
#include "Punto.h"
using namespace std;

//----------------------------------------
//Prueba automática
//----------------------------------------
void Prueba(Punto p1, Punto p2, Punto sol){
  if (sol.getX()==p2.getX() && sol.getY()==p2.getY()){  //Si sol = (-1,1)
      cout<<"El programa se ha ejecutado correctamente";
    }
    else{
      cout<<"Ha ocurrido algún problema";
    }
}

//-----------------------------------
// Punto -> cercano() -> Punto
//-----------------------------------

Punto cercano(Punto p1, Punto p2){
  Punto origen; //default (0,0)
  if(p1.distancia(origen)<p2.distancia(origen)){  //Si la distancia al origen del p1 es menor que la de p2 (más cercano)
    return p1;
  }
  return p2;
}


//-----------------------------------
//main
//-----------------------------------

int main(){
  Punto p1(2,2);
  Punto p2(-1,1);

  Punto sol=cercano(p1, p2);
  cout<< "El punto más cercano al origen es: ("<<sol.getX()<<","<<sol.getY()<< ")";
  Prueba(p1,p2,sol);

}
