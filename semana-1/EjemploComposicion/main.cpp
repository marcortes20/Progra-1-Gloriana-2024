#include<iostream>
#include"sstream"
using namespace std;


#include"Fecha.h"
#include"Empleado.h"


int main () {
	
	Fecha fecha_Nacimiento(24,1,2002);
	
	
	Fecha fecha_Contratacion(20,12,2023);
	
	string nombre = "Marco Cortes";
	
	string cedula = "589454785";
	
	Empleado empleado_1(cedula,nombre,fecha_Nacimiento, fecha_Contratacion);
	
	cout<<empleado_1.toString();
	
	//cout<<n.toString();
	return 0;
}

