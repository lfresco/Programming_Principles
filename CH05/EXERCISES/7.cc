#include <iostream>
#include <cmath>
class negative_delta {};

double find_delta(double a, double b, double c){
	double delta = b*b - 4*a*c;
	if(delta < 0) throw negative_delta{};
	return delta;
}

int main(int argv, char * argc[]){
	try{
		std::cout << "Enter the three coefficients in order a, b and c." << std::endl;
		double a, b, c;
		std::cin >> a >> b >> c;

		double delta = find_delta(a, b, c);
		double x1 = (-b - sqrt(delta))/(2*a);
		double x2 = (-b + sqrt(delta))/(2*a);

		std::cout << "The two solutions are " << x1 << " and " << x2 << std::endl;
	}catch(negative_delta){
		std::cerr << "There are no real solutions!" << std::endl;
		return 1;
	}

	return 0;
		


}
