#include <iostream>
#include "Punto.h"
using namespace std;


Punto cercano(Punto p1, Punto p2){
  Punto origen;
  if(p1.distancia(origen)>p2.distancia(origen)){
    return p1;
  }
  return p2;
}



int main(){
  Punto p1(2,3);
  Punto p2(-2,-5);

  Punto sol=cercano(p1, p2);
  cout<< "El punto más lejano al origen es: ("<<sol.getX()<<","<<sol.getY()<< ")\n";

    if (sol.getX()==p2.getX() && sol.getY()==p2.getY()){
        cout<<"El programa se ha ejecutado correctamente";
      }
      else{
        cout<<"Ha ocurrido algún problema";
      }
  }
