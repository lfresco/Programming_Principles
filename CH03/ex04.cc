#include <iostream>

int main(int argv, char * argc[]){
	
	std::cout << "Enter two integer values" << std::endl;
	/*int val1;
	int val2;*/
	double val1;
	double val2;
	std::cin >> val1 >> val2;
	
	//int bigger;
	//int smaller;
	double bigger;
	double smaller;
	if(val1 > val2){
		bigger = val1;
		smaller = val2;
	}else{
		bigger = val2;
		smaller = val1;
	}
	//int sum = val1 + val2;
	//int difference = val1 - val2;
	//int product = val1 * val2;
	double ratio = (val1 / val2);
	double sum = val1 + val2;
	double difference = val1 - val2;
	double product = val1 * val2;


	std::cout << "The bigger value is " << bigger << std::endl;
	std::cout << "The smaller value is "<< smaller << std::endl;
	std::cout << "The sum is " << sum << std::endl;
	std::cout << "The difference is " << difference << std::endl;
	std::cout << "The product is " << product << std::endl;
	std::cout << "The ratio is " << ratio << std::endl;




 return 0;
}
