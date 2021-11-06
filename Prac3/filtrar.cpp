#include <iostream>
using namespace std;

void filtrar(int *lista, int *lista2, int tam, int &z){
  //int z=0;
for(int i=0; i<tam; i++){
  if(lista[i]>0){
    lista2[z]=lista[i];
    z++;
  }

}



}



int main(){
int tam=5, z=0;
int lista[tam]={-1,2,3,-4,5};
int lista2[z];

filtrar(&lista[0],&lista2[0],tam, z);


cout<<"aqui tienes los putos valores positivos ";
for (int i = 0; i < z; i++) {
  cout<< lista2[i]<<" ";
}



}
