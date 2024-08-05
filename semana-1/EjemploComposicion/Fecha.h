#include"sstream"
class Fecha {
private:
	int dia;     // 1-31 dependiendo del mes
	int mes;     // 1-12
	int annio;   // cualquier año
	
public:
	Fecha(int dia, int mes, int annio) {
		setMes(mes); // se llama primero a setMes porque
		setDia(dia);
		setAnnio(annio);
	}
	
	Fecha() {}
	
	void setMes(int mes) {
		if (mes >= 1 && mes <= 12) {
			this->mes = mes;
		} else {
			cout << "Mes invalido (" << mes << ") se establece 1" << endl;
			this->mes = 1;
		}
	}
	
	void setDia(int dia) {
		int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		
		if (dia > 0 && dia <= diasPorMes[mes]) {
			this->dia = dia;
		} else {
			cout << "Dia invalido (" << dia << ") se establece en 1" << endl;
			this->dia = 1;
		}
	}
	
	void setAnnio(int annio){
		if(annio <= 2024){
			this->annio = annio;
		}
		else {
			cout << "Annio invalido (" << annio << ") se establece en 2000" << endl;
			this->annio = 2000;
		}
	}
		
	string toString(){
		std::stringstream out; 
		out<<this->dia<<"/"<<this->mes<<"/"<<this->annio;
		return out.str();
		} 
};
