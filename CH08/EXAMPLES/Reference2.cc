#include <iostream>

int f(int& x){
	x = x+1;
	return x;
}

int main(int argv, char* argc[]){

	int xx{0};
	std::cout << "xx before calling f(): " << xx << std::endl;
	std::cout <<"f(xx) = " << f(xx) << std::endl; 
	std::cout <<"xx after the call of f(): "<< xx << std::endl;
	return 0;
}	
