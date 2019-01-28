#include <iostream>
#include <vector>

int main(int argv, char * argc[]){
	std::vector<char> values = {'r','r','s','p','p','s','r', 'p'};
	int i{0};
	do{
		std::cout << "Enter your bet" << std::endl;
		std::string user_choice;
		std::cin >> user_choice;

		if(user_choice == "rock"){

			switch(values[i]){

				case 'r':
				
					std::cout << "That's a tie!" << std::endl;
					break;
				case 'p':
					
					std::cout << "You lost!" << std::endl;
					break;
				case 's':
					
					std::cout << "You won!" << std::endl;
					break;

		
			}
		
		}else if(user_choice == "paper"){

			switch(values[i]){
				case 'r':
					std::cout << "You won! " << std::endl;
					break;
				case 'p':
					std::cout << "That's a tie!" << std::endl;
					break;
				case 's':
					std::cout << "You lost!" << std::endl;
					break;
			}	


		}else if(user_choice == "scissors"){

			switch(values[i]){
				case 'r':
					std::cout << "You lost!" << std::endl;
					break;
				case 'p' : 
					std::cout << "You won!" << std::endl;
					break;
				case 's':
					std::cout << "That's a tie!" << std::endl;
					break;



			}

		}else{
			std::cout << "Please write rock paper or scissors." << std::endl;
		}

		++i;
	}while(i < values.size());
	return 0;
}
