#include "Persona.h"

persona::persona(int iID, int iEdad, int iTelefono, string iNombre, int iE-mail){
ID = iID;
Nombre = iNombre;
E-mail = iE-mail;
Telefono = iTelefono;
Edad = iEdad;
}

void Persona::Consultar_Edad(){
cout<<"Soy "<<Nombre<<"y tengo "<<Edad<<" anios"<<endl;
}
void Persona::Ingresar(){
cout<<"Soy "<<Nombre<<" y estoy en el modulo Ingresar"<<endl;
}
void Persona::Cambiar(){
cout<<"Soy "<<Nombre<<" y estoy en el modulo Cambiar"<<endl;
}
void Persona::Vaciar(){
cout<<"Soy "<<Nombre<<" y estoy en el modulo Vaciar"<<endl;
}
void Persona::Verificar(){
cout<<"Soy "<<Nombre<<" y estoy en el modulo Verificar"<<endl;
}
