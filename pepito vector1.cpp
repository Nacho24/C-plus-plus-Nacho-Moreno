//  vamos a aprender a hacer arrays
//ready? let`s go
//alguien me sigue?????
using namespace std;

#include<iostream>
int main(){
    int pepito[5];
    int cont;
    int salir;
    for(cont=0;cont<5;cont++){
        cout<<"dime un numero: ";
        cin>>pepito[cont];
    }
    cout<<"mira mi vector relleno: ";
    for(cont=0;cont<5;cont++){
       cout<<"pepito["<<cont<<"]="<<pepito[cont]<<endl;
    }
    cout<<"toca cualquier tecla:";
    cin>>salir;
    return 0;
}
