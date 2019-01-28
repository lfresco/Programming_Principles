#include <iostream>

int from_word_to_number(std::string word);

int main(int argv, char * argc[]){

	std::cout << "Enter a number in a word-y way"<< std::endl;

	std::string word;

	std::cin >> word;

	int number = from_word_to_number(word);
	if(number < 5){
		std::cout << word << " is equal to " << number << std::endl;
	}else{
		std::cout << "Not a number I know" << std::endl;
	}

	return 0;
}


int from_word_to_number(std::string word){

	int number;

	if(word == "zero"){
		return 0;
	}else if(word == "one"){
		return 1;
	} else if (word == "two"){
		return 2;
	}else if(word == "three"){
		return 3;
	}else if (word == "four"){
		return 4;
	}else{return 5;}


}
