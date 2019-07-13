#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int **i = new int *[10];
	for(int n=0;n<10;n++){ i[n] = new int[4]; }
	system("pause>silvio");
	delete[] i;
}
