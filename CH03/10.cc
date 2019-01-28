#include <iostream>

void from_symbols_to_result(std::string operand, double val1, double val2);

int main(int argv, char * argc[]){

	std::cout << "Enter an operand (as a symbol or its abbreviation) followed by two doubles "<<std::endl;
	std::string operand;
	double val1;
	double val2;

	std::cin >> operand >> val1 >> val2;

	from_symbols_to_result(operand,val1,val2);
 




	return 0;
}



void from_symbols_to_result(std::string operand, double val1, double val2){
	
	if((operand == "+") || (operand == "plus")){
		std::cout << "The sum of "<< val1 << " and "<<val2 << "is equal to " << val1+val2 << std::endl;	
	}else if((operand == "-")|| (operand == "minus")){
		std::cout << "The difference between "<< val1 << " and "<<val2 << "is equal to " << val1-val2 << std::endl;
	}else if((operand == "*")||(operand == "mul")){
		std::cout << "The multiplication of "<< val1 << " and "<<val2 << "is equal to " << val1*val2 << std::endl;
	}else if((operand == "/")||(operand == "div")){
		std::cout << "The quotient between "<< val1 << " and "<<val2 << "is equal to " << val1/val2 << std::endl;
	}



}
