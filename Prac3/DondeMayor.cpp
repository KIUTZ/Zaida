#include <iostream>
using namespace std;

int dondeEstaElMayor(int Lista[], int tam){
int numero=0;
int posic;
for(int i=0; i<tam; i++){

if(Lista[i]>numero){
numero=Lista[i];
posic=i;
}

}//return numero;
return posic;


}


int main(){
  int tam;

  cout<<"introduce el tamaño de la lista ";
  cin>>tam;

  int Lista[tam];
  cout<<"introduce los numeros  ";
  for(int i=0; i<tam; i++){
      cin>>Lista[i];

    }
  cout<<dondeEstaElMayor(Lista,tam);


}
