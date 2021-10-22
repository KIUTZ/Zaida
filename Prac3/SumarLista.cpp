#include <iostream>
using namespace std;

int SumarLista(int Lista[], int Tamaño){
  int Suma;
  for(int i=0; i<Tamaño; i++ ){
    Suma=Suma+Lista[i];
  }
    return Suma;

  }



int main(){
  int Tamaño, Suma;
 //vector
 //*Numeros= Lista[Tamaño]; //esto aqui no funciona, rompe el programa

 cout<<"Introduce el tamaño de la lista ";
 cin>>Tamaño; //ya tengo el tamaño de la lista, falta ponerle valores

 int Lista[Tamaño];
 cout<<"Introduce los números a sumar ";
  //Suma=SumarLista(Tamaño, *Numeros);
  for(int i=0; i<Tamaño; i++){
    cin>> Lista[i]; //me almacena los numeros en la lista
  }
  Suma=SumarLista(Lista, Tamaño);
  cout<<"El resultado de sumar los numeros es: "<< Suma;
}

//*Numeros= Lista[Tamaño]; //no se que hace esto la verdad
//ahora quiero sumar esos Numeros



//me muero no se lo que estoy haciendo
