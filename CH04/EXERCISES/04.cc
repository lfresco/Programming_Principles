#include <iostream>
#include <vector>

void less_than(std::vector<int> guesses, int i);
void more_than(std::vector<int> guesses, int i);
int main(int argv, char * argc[]){

	std::cout << "Think of an integer number between 1 and 100." << std::endl;
	int number;
	std::cin >> number;
	
	
	/*
	std::cout << "Is the number you are thinking of less than"<< guess << "?" << std::endl;
	std::string answer;
	std::cin >> answer;
	if(answer == "yes"){
		guess = guess/2;
		std::cout << "Is the number you are thinking of less of " << guess << " ?" << std::endl;
		std::cin >> answer;
		if(answer == "yes"){
			guess = guess/2;
			std::cout << "Is the number you are thinking of less of" << guess << " ?" << std::endl;
			std::cin >> answer;
			if(answer == "yes"){
				guess = guess/2;
				std::cout << "Is the number you are thinking of less of " << guess << " ?" << std::endl;
				 std::cin >> answer;
				 if(answer == "yes"){
					guess = guess/2;
					std::cout << "Is the number you are thinking of " << guess << std::endl;
					std::cin >> answer;
				 }
			}
		}
	}
	*/


	
	
	/*for(int i = 0; i < 8; i++){
		std::cout << "Is the number you are thinking of less than "  << guesses[i] << " ?"<< std::endl;
		std::string answer;
		std::cin >> answer;
		if(answer == "yes"){
			int value = guesses[i]/2;
			guesses.push_back(value);
		} else if(answer == "no"){
			if(guesses.size() == 1 || guesses[i] > 75){
				int value = (100 + guesses[i])/2;
				guesses.push_back(value);
			}else{
				int value = (guesses[i-1] + guesses[i]) / 2;
				guesses.push_back(value);
			}
			
			
		}
	}
	
	std::cout << "The number you are thinking of is " << guesses[7] << std::endl;
	*/

	int a{1};
	int b{100};
	int guess{50};
	int contatore{0};
	do{
		std::cout << "The number less than " << guess << " ?"<< std::endl;
		std::string answer;
		std::cin >> answer;
		
		if (answer == "yes"){
			int value = (guess + a)/2;
			b = guess;
			guess = value;
		} else if(answer == "no"){
			a = guess;
			int value = (guess + b)/2;
			guess = value;
		}
		++contatore;
		if(guess == number){
			std::cout << "The number you thought of is "<< guess << " !"<< std::endl;
			return 0;
		}
	}while(contatore < 8);
	std::cout << "You thought of " << number << std::endl;
	std::cout << "But I'm guessing " << guess << std::endl;
	return 0;
}




void less_than(std::vector<int> guesses, int i){
		int value = guesses[i] /2;	
		guesses.push_back(value);

	}


void more_than(std::vector<int> guesses, int i){
	int value = (100 + guesses[i])/2;
	guesses.push_back(value);		 
}
