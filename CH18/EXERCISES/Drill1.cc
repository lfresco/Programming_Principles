#include <iostream>
#include <vector>

const int gas = 10;

int ga[gas] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int array[], int arg) {
	int la[10];
	std::cout << "Creates new local array" << std::endl;
	for(int i = 0; i < gas; i++) {
		la[i] = array[i];
		std::cout << la[i] << std::endl;
	}
	int* p = new int[gas];
	std::cout << "Allocato nuovo array sull'heap" << std::endl;
	for(int i = 0; i < gas; i++) {
		p[i] = array[i];
		std::cout << p[i] << std::endl;
	}
	delete[] p;
}

int main(int argv, char *argc[]) {

	f(ga,gas);
	int aa[gas];
	aa[0] = 1;

	for(int i = 1; i < gas; i++) {
		aa[i] = (i + 1) * aa[i - 1];
	}

	f(aa, gas);
	
	return 0;
}

