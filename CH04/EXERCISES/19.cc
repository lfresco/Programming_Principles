#include <iostream>
#include <vector>

int main(int argv, char * argc[]){

	std::cout << "Enter a name followed by a number. Write NoName 0 to exit." << std::endl;
	
	std::vector<std::string> names;
	std::vector<double> scores;

	do{
		std::string name;
		double score;

		std::cin >> name >> score;

		if(name == "NoName" && score == 0){
			break;
		} else {
			for(int i = 0; i < names.size();i++){
				if(name == names[i]){
					std::cout << "Name already present."<<std::endl;
					break;
				}
			}
			names.push_back(name);
			scores.push_back(score);
		} 
	}while(std::cin);

	/*for(int i = 0; i < names.size(); i++){
	
		std::cout << names[i] << " " << scores[i] << std::endl;

	}*/

	std::cout << "Enter a name to know to score" << std::endl;
	std::string name;
	std::cin >> name;
	
	

	for(int i = 0; i < names.size();i++){
		if(name == names[i]){
			std::cout << "The score of " << names[i] << " is " << scores[i] << std::endl;
		       break;	
		}
		if(i == (names.size()-1)){
			std::cout << "Name not found!" << std::endl;
		}
	

	} 
	

	return 0;
}
