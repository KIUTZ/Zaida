#include <iostream>
using namespace std;
#include "Punto.h"



//-----------------------------------
// Punto -> queCuadrante() -> Z
//-----------------------------------
  int queCuadrante(Punto p){

     if(p.getX()>0 && p.getY()>0){
       return 1;
       }
       else if (p.getX()<0 && p.getY()>0){
         return 2;
       }
       else if(p.getX()<0 && p.getY()<0){
         return 3;
       }
       else if(p.getX()>0 && p.getY()<0){
         return 4;
       }
       return 1;
  }

int main(){

  Punto p1 (-3,-8);
  int sol= queCuadrante(p1);

  cout << "El cuandrante del punto dado es " << queCuadrante(p1)<<"\n";

  if (sol==3){
      cout<<"El programa se ha ejecutado correctamente";
    }
    else{
      cout<<"Ha ocurrido algún problema";
    }
}
