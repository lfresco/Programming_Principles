#include <iostream>

void sort(int x1,int x2, int x3);

int main(int argv, char * argc[]){

	std::cout << "Enter three integer values" << std::endl;
	int val1;
	int val2;
	int val3;

	std::cin >> val1 >> val2 >> val3;

	int max;
	int medium;
	int min;
	if((val1 > val2) && ( val1 > val3) ){
		max = val1;
		if(val2 > val3){
			medium = val2;
			min = val3;
		}else{
			medium = val3;
			min = val2;
		}


	}
	if((val2 > val1) && (val2 > val3) ){
		max = val2;
		if(val1 > val3){
			medium = val1;
			min = val3;

		}else{
			medium = val3;
			min = val1;

		}
	}
	
	if((val3 > val1) && (val3 > val2)){
		max =val3;
		if(val1 > val2){
			medium = val1;
			min = val2;
		}else{
			medium = val2;
			min = val1;
		}
	}

	std::cout << min << ", "<< medium << ", " << max << std::endl;




	return 0;
}








