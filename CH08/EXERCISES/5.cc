#include <iostream>
#include <vector>
#include <string>

std::vector<int> reverse(const std::vector<int>& vector);
void swap(std::vector<int>& vector);
void print(const std::vector<int>& vector);

int main(int argv, char * argc[]){
	std::cout << "Enter a few integers that will be put inside a vector and then reversed." << std::endl;
	std::vector<int> vector;
	do{
		std::string element;
		std::cin >> element;
		if(element == "|"){
			break;
		}else{
			vector.push_back(std::stoi(element));
		}

	}while(std::cin);
	
	std::vector<int> reversed = reverse(vector);
	std::cout << "The reversed vector is " << std::endl;
	print(reversed);
	
	swap(vector);
	std::cout << "The swapped vector is " << std::endl;
	print(vector);
	return 0;
}

std::vector<int> reverse(const std::vector<int>& vector){
	std::vector<int> reversed;
	for(int i = (vector.size()); i >= 0; i--){
		reversed.push_back(vector[i]);
	}

	return reversed;

}

void print(const std::vector<int>& vector){
	std::cout << "{" ;
	for(int i = 0; i < vector.size(); i++){
		std::cout << " " << vector[i] <<",";
	}
	std::cout << "}" << std::endl;
}
void swap(std::vector<int>& vector){
	int size = vector.size();
	if((size % 2) == 0){
		for(int i = 0; i < (size/2); i++){
			int tmp = vector[i];
			vector[i] = vector[(size - i)-1];
		        vector[size - i-1] = tmp;
		}
	}else{
		for(int i = 0; i <= (size/2); i++){
			int tmp = vector[i];
			vector[i] = vector[(size - i) - 1];
			vector[size - i - 1] = tmp;
		}
	}
}







