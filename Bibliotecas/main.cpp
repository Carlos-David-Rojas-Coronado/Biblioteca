#include "Persona.h"
#include "Empleado.h"
#include <iostream>

using namespace std;

int main(){
Persona pl= Persona(321,21,12345678, "David","Rojas@gmail.com");
pl.Consultar_Edad();
pl.Ingresar();
pl.Cambiar();
pl.Vaciar();
pl.Verificar();
cout<<""<<endl;
cout<<""<<endl;
EmpleadoVendedor p2= EmpleadoVendedor(123,81,66455587, "Jose", "jose@gmail.com",557);
p2.MostrarVendedor();
cout<<""<<endl;
cout<<""<<endl;
cout<<"Carlos David Rojas Coronado carnet:9959-21-504"<<endl;
}
