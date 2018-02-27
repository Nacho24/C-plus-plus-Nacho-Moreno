#include<iostream>
#include<fstream> 
using namespace std;
int cont; 
int numerodeamigos ;
int main (){
    struct agendadeamigos{
       string sexo;
       string nombre;
       string apellido;
       int numeromovil;
       int anos;
       string correo;
       string pais;
       string ciudad;
};
    cout<<"-->Cuantos amigos quieres poner en tu agenda:   "<<endl;
    cin>>numerodeamigos;
    agendadeamigos x[numerodeamigos];
    for(cont=0;cont<numerodeamigos;cont++){
	  cout<<"---->Es un hombre o una mujer"<<endl;
	  cin>>x[cont].sexo;
      cout<<"-->Pon su nombre"<<endl;
      cin>>x[cont].nombre;
      cout<<"-->Pon su primer apellido"<<endl;
      cin>>x[cont].apellido;
      cout<<"-->Pon su numero de movil"<<endl;
	  cin>>x[cont].numeromovil;
      cout<<"-->cuantos anos tiene?"<<endl;
      cin>>x[cont].anos;
      cout<<"-->Pon su correo"<<endl;
      cin>>x[cont].correo;
 	  cout<<"-->De que pais es?"<<endl;
	  cin>>x[cont].pais;
	  cout<<"-->De que ciudad es"<<endl;
	  cin>>x[cont].ciudad;
	  cout<<"-->Muchas gracias ya tenemos su informacion."<<endl;
	                   
 }   
                     ofstream fichero("Agenda de amigos.txt");
                         for(cont=0;cont<numerodeamigos;cont++){
                             fichero<<" -->Sexo  "<<x[cont].sexo<<endl;
                             fichero<<" -->Nombre   "<<x[cont].nombre<<endl;
                             fichero<<" -->Apellido  "<<x[cont].apellido<<endl;    
                             fichero<<" -->Numero de movil  "<<x[cont].numeromovil<<endl;
                             fichero<<" -->Tlf casa  "<<x[cont].anos<<endl;
                             fichero<<" -->Correo  "<<x[cont].correo<<endl;
                             fichero<<" -->Pais  "<<x[cont].pais<<endl;
                             fichero<<" -->Ciudad  "<<x[cont].ciudad<<endl;
                             }
                             fichero.close();
return 0;
}
