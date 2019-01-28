#include <iostream>
#include <vector>

double maxv(const std::vector<double>& vector);

int main(int argv, char * argc[]){

	std::cout << "Enter the dimension of the vector." << std::endl;
	int n;
	std::cin >> n;
	std::cout << "Enter the values you want to store." << std::endl;
	std::vector<double> vector;

	do{
		double element;
		std::cin >> element;

		vector.push_back(element);
	
	}while(std::cin && vector.size() < n);
	
	double max = maxv(vector);
	
	std::cout << "The biggest element in the vector is " << max << std::endl;
	return 0;
}

double maxv(const std::vector<double>& vector){
	double max = vector[0];
	for(int i = 1; i < vector.size(); i++){
		if(vector[i] > max){
			max = vector[i];
		}
	}
	return max;
}
