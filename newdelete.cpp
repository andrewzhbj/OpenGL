#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int *num = new int(4);
	char *c = new char[256];
	c[4] = 'A';
	cout << *num << endl;
	cout << c[4];
	delete num, c;
	return 0;
}
