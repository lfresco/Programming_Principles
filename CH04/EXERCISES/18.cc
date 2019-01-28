#include <iostream>
#include <vector>
#include <cmath>

double find_delta(double a, double b, double c);
int main(int argv, char * argc[]){
	
	std::cout << "Enter the coefficients of your equation." << std::endl;
	double a;
	double b;
	double c;
	std::cin >> a >> b >> c;

	double delta = find_delta(a, b, c);
	double x1 = (- b + sqrt(delta))/2*a;
	double x2 = (- b - sqrt(delta))/2*a;

	std::cout << "The two solutions are " << x1 << " and " << x2 << std::endl;
	





	return 0;
}

double find_delta(double a, double b, double c){

	double delta = b*b - 4*a*c;

	return delta;
}
