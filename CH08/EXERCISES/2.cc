#include <iostream>
#include <vector>

void print(const std::vector<int>& vector, std::string label);


int main(int argv, char * argc[]){

	std::vector<int> vector(10);
	std::cout << "Write omething that will be used as a label." << std::endl;
	std::string label;
	std::cin >> label;

	print(vector, label);


	return 0;
}

void print(const std::vector<int>& vector, std::string label){

	std::cout << "The label is " << label << std::endl;
	for(int i = 0; i < vector.size(); i++){

		std::cout << "v["<< i << "] = " << vector[i] << std::endl;
	}

}
