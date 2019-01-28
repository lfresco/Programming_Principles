#include <iostream>

std::string odd_or_even(int num);

int main(int argv, char * argc[]){

	std::cout << "Enter an integer number." << std::endl;
	int num;
	std::cin >> num;

	std::string risposta = odd_or_even(num);

	std::cout << "The number " << num << " is an " << risposta << " number" << std::endl;  




	return 0;
}


std::string odd_or_even(int num){

	std::string answer;
	if((num % 2)== 0){
		answer = "even";
	}else{
		answer = "odd";
	}

	return answer;


}
