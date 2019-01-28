#include <iostream>
#include <vector>


int main(int argv, char * argc[]){
	
	int i{7};

	int& r = i;
	r = 9;
	i = 10;	
	std::cout << r << ' ' << i << std::endl;


	return 0;
}
