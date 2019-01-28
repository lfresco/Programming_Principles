#include <iostream>
#include <vector>

int main(int argv, char * argc[]){
	int square{1};
	int grains_per_square{2};
	int total_grains{2};
	
	std::cout << "Select the number of grains you want to accumulate " << std::endl;
	int TOTAL;
	std::cin >> TOTAL;
	for(int i = 1; i < 64; i++){

		++square;
		grains_per_square *=2;
		total_grains +=grains_per_square;
		if(total_grains > TOTAL){
			std::cout << "You need " << square << " squares to get " << TOTAL << " grains of rice. " << std::endl;
			break;
		}
		

	}





	return 0;
}
