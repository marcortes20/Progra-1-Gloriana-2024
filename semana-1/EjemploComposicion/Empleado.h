
class Empleado{
	
private:
	string cedula;
	string nombre;
	Fecha fechaNac;
	Fecha fechaCon;
	
public:
	
	Empleado(string cedula, string nombre, Fecha fechaNac, Fecha fechaCon){
		this->cedula = cedula;
		this->nombre = nombre;
		this->fechaNac = fechaNac;
		this->fechaCon = fechaCon;
	}
	
	Empleado(){}
	
	
	
	string toString(){
		std::stringstream out; 
		
		
		
		
		out<<"Cedula: "<<this->cedula<<"\nNombre: "<<this->nombre<<"\n Fecha nacimiento: "<<
			this->fechaNac.toString()<<"\nfecha contratacion: "<<this->fechaCon.toString();
		return out.str();
	} 
	
	
};
