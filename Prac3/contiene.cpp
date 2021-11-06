#include <iostream>
using namespace std;


bool contiene(int *lista, int tam, int n){

  for(int i=0; i<tam; i++){
  if(lista[i]==n){
      return true;

    }


}

return false;

}




int main(){
int n=3, tam=5;
int lista[tam]={1,4,6,5,8};
bool x;

x=contiene(&lista[0], tam, n);

cout<<x;

}
