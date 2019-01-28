#include <iostream>
#include <vector>

std::vector<int> make_guess();
int count_bulls(std::vector<int> guess, std::vector<int> answer);
int count_cows(std::vector<int> guess, std::vector<int> answer);

int main(int argv, char * argc[]){
	
	std::vector<int> answer{1,4,6,9};

	int bulls{0};
	int cows{0};


	while(bulls != 4){
		std::cout << "Enter your guess." << std::endl;
		std::vector<int> guess = make_guess();
		bulls = count_bulls(guess, answer);
		cows = count_cows(guess, answer);
		
		std::cout << bulls << " bulls and " << cows << " cows." << std::endl;
		
		
	}

	return 0;
}

std::vector<int> make_guess(){
	std::vector<int> guess;
	int i{0};
	do{
		int element;
		std::cin >> element;

		guess.push_back(element);
		
		++i;
		
	}while(i < 4);

	return guess;
}

int count_bulls(std::vector<int> guess, std::vector<int> answer){
	
	int bulls{0};

	for(int i = 0; i < answer.size(); i++){
		if(guess[i] == answer[i]){
			++bulls;
		}
	}

	return bulls;
}

int count_cows(std::vector<int> guess, std::vector<int> answer){
	int cows{0};

	for(int i = 0; i < guess.size(); i++){
		for(int j = 0; j < answer.size(); j++){
			if(guess[i] == answer[j] && i != j){
				++cows;
			}
		}
	}


	return cows;
}
