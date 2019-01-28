#include <iostream>
#include <vector>
#include <algorithm>
void print(const std::vector<std::string>& names, std::vector<int>& ages);
std::vector<int> sort_two_vectors(std::vector<std::string>& names, const std::vector<int>& ages);
int main(int argv, char * argc[]){
	std::cout << "Write five names that you want to store." << std::endl;
	std::vector<std::string> names;
	do{
		std::string name;
		std::cin >> name;
		
		names.push_back(name);
		
	}while(std::cin && names.size() <= 4);

	std::cout << "Now write the age of the people named." << std::endl;
	std::vector<int> ages;
	
	do{
		int age;
		std::cin >> age;
		
		ages.push_back(age);
		
	}while(std::cin && ages.size() <= 4);

	print(names, ages);
	
	

	std::vector<int> ages_sorted = sort_two_vectors(names, ages);

	std::cout << "After the sorting operations we got: " << std::endl;

	print(names, ages_sorted);



	return 0;
}

void print(const std::vector<std::string>& names, std::vector<int>& ages){
	for(int i = 0; i < names.size(); i++){
		std::cout << "(" << names[i] <<", " << ages[i] <<")"<< std::endl;
	}

}

std::vector<int> sort_two_vectors(std::vector<std::string>& names, const std::vector<int>& ages){
	std::vector<std::string> names_unsorted = names;
	std::vector<int> ages_sorted;
	std::sort(names.begin(), names.end());
	for(int i = 0; i < names.size(); i++){
		for(int j = 0; j < names_unsorted.size(); j++){
			if(names[i] == names_unsorted[j]){
				ages_sorted.push_back(ages[j]);
			}
		}
	}

	return ages_sorted;
}
