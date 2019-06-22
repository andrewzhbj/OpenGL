#include <iostream>
using namespace std;

class Combustible{
	private:
		int litros;
	public:
		Combustible(int _litros);
		~Combustible();
		//void cargar(int c);
		//void consumir(int c);
		//int actual();
};
class Auto{
	private:
		int id;
		string color, marca;
	public:
		Auto(int _id, string c, string m);
		~Auto();
		bool estado = false;
		void Avanzar();
		void Prender();
		void Apagar();
};

Combustible::Combustible(int _litros){ litros = _litros }

Auto::Auto(int _id, string c, string m){
	id = _id;
	color = c;
	marca = m;
	cout << id << " " << color << " " << marca << endl;
}	
Auto::~Auto(){
	cout << "Clase destruida" << endl;
	system("pause>silvio");
}

void Auto::Prender(){ estado = true; }
void Auto::Apagar(){ estado = false; }

int main(int argc, char** argv){
	{
	Auto primerAuto = Auto(1, "Azul", "Ferrari");
	Auto segundoAuto = Auto(2, "Rojo", "Ford");
	}
	Combustible primerTanque = Combustible(100);
	return 0;
}
