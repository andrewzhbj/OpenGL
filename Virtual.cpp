#include <iostream>

using namespace std;

class A{
	public: virtual int get(){ 
		return 1; 
	}
};

class B : public A{
	public: int get(){ 
		return 2; 
	}
};

int main(int argc, char** argv){
	B b;
	A* puntero = &b;
	A &referencia = b;
	cout << b.get() << endl;
	cout << puntero->get() << endl;
	cout << referencia.get() << endl;
	return 0;
}
