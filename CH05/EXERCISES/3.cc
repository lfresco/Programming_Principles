#include <iostream>

class below_minimum {};

double ctok(double c){
	if(c <= -273.15) throw below_minimum{};
	double k = c + 273.15;
	return k;
}

double ktoc(double k){
	if(k <= 0) throw below_minimum{};
	double c = k - 273.15;
        return c;	
}


int main(int argv, char * argc[]){
	try{
		std::cout << "Enter a temperature followed by 'c' or 'k'." << std::endl;
		double value;
		char uom;
		std::cin >> value >> uom;
		double converted;
		switch(uom){
			case 'c':
			{
				converted = ctok(value);
				
				
			} break;
			case 'k':
			{
				converted = ktoc(value);
			
			} break;
			default :
			{	
				std::cout << "Wrong unit of measure." << std::endl;
				return 1;
		
			}
		}
		
		std::cout << "The converted temperature is " << converted << std::endl;
		return 0;
		
	}catch(below_minimum){
		std::cout << "Oops! Temperature is too low!" << std::endl;
	}


	return 0;
}
