#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	
	char texto[256];
	ofstream fs("datos.txt");
	fs << "Hola" << endl;
	fs.close();
	
	ifstream fe("datos2.txt");
	fe.getline(text, 256);
	cout << text << endl;
	
	system("pause>silvio");
}
