#include <iostream>
#include <vector>

int main(int argv, char * argc[]){
	
	std::vector<std::string> spelled{"zero", "one", "two", "three", "four", "five", "six", "seven",
					"eight", "nine"};

	std::cout << "Enter an integer between 0 and 9" << std::endl;
	int value;
	std::cin >> value;
	for(int i = 0; i < 10; i++){
		if(i == value){
			std::cout << "You wrote the number " << spelled[i] << std::endl;
			break;
		}else if(i == 9){
			std::cout << "I said between 0 and 9!" << std::endl;
		}

	}

	std::cout << "Spell a number between zero and nine" << std::endl;
	std::string word;
	std::cin >> word;

	for(int i = 0; i < 10; i++){
		if(spelled[i] == word){
			std::cout << "You wrote the number " << i << std::endl;
			break;
		}else if(i == 9){
			std::cout << "I said between zero and nine." << std::endl;
		}
	} 


	return 0;
}
