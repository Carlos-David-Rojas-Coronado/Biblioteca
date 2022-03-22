#include "Empleado.h"

EmpleadoVendedor::EmpleadoVendedor(int iID, int iEdad, int iTelefono, string iNombre, int iE-mail, int iCodigoVendedor) : persona(iID,iEdad,iTelefono,iNombre,iE-mail,iCodigoVendedor){
CodigoVendedor = iCodigoVendedor;
}

void EmpleadoVendedor::MostrarVendedor(){
Consultar_Edad;
Ingresar;
Cambar;
Vaciar;
Verificar;
cout<<"Mi codigo de Vendedor es "<<CodigoVendedor<<endl;
}
