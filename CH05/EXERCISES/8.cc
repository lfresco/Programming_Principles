#include <iostream>
#include <vector>
#include <string>

class out_of_range {};

int sum_of_elements(std::vector<int> elements, int n){
	if(elements.size() < n) throw out_of_range{};
	int sum{0};
	for(int i = 0; i = n; i++){
		sum += elements[i];
	}
	return sum;
}

int main(int argv, char * argc[]){
	try{
		std::cout << "Please enter the number of values you want to sum:" << std::endl;
		int number_to_sum;
		std::cin >> number_to_sum;
	
		std::cout << "Please enter some integers (press '|' to stop):" << std::endl;
		std::vector<int> elements;
		do{
			std::string element;
			std::cin >> element;
			
			if(element == "|"){
				break;
			}else{
				int value = std::stoi(element);
				elements.push_back(value);
			}


		}while(std::cin);

		int total_sum = sum_of_elements(elements, number_to_sum);
		
		std::cout << "The sum of the first " << number_to_sum << " numbers ( " ;
       	        
		for(int i = 0; i = number_to_sum; i++){	
			std::cout << elements[i] << " ";
		}
		
		std::cout << ") is " << total_sum << std::endl;
	
	}catch(out_of_range){
		std::cerr << "Oops! You went out of range!" << std::endl;
		return 1;
	}

	return 0;
}
