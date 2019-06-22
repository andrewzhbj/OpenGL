#include <iostream>
#define YO 1

using namespace std;

class A{
	public:
		virtual int get(){ return YO; }
};

class B : public A{
	public:
		int get(){ return YO+1; }
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
