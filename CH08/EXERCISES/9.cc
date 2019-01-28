#include <iostream>
#include <vector>

double index_calculator(const std::vector<double>& prices, std::vector<double>& weights);

int main(int argv, char * argc[]){
	
	std::cout << "Enter the dimension of the two vectors." << std::endl;
	int n;
	std::cin >> n;

	std::cout << "Enter the prices." << std::endl;
	std::vector<double> prices;
	do{
		double price;
		std::cin >> price;

		prices.push_back(price);
	
	}while(std::cin && prices.size() <= n);

	std::cout << "Enter the weights." << std::endl;
	std::vector<double> weights;
	do{
		double weight;
		std::cin >> weight;
		
		weights.push_back(weight);
	}while(std::cin && weights.size() <= n);


	double index = index_calculator(prices, weights);

	std::cout << "The value obtained for the index is equal to " << index << std::endl;

	return 0;
}

double index_calculator(const std::vector<double>& prices, std::vector<double>& weights){
	double sum{0};
	for(int i = 0; i < prices.size();i++){
		sum +=prices[i]*weights[i];
	}
	return sum;
}
