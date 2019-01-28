#include <iostream>
#include <vector>

double ctok(double c){
	int k = c + 273.15;
	return k;
}

int main(int argv, char * argc[]){
	double c;
	std::cout << "Insert a Celsius temperature." << std::endl;
	std::cin >> c;
	double k = ctok(c);
	std::cout << "The converted temperature is " << k << std::endl;


	return 0;

}
