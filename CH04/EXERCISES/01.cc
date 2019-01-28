#include <iostream>
#include <vector>

double min(std::vector<double>);
double max(std::vector<double>);

int main(int argv, char * argc[]){
	
	std::cout << "Enter some doubles and then | when you have finished inputing " << std::endl;
	std::vector<double> distances;

	do{
		std::string value;
		double num;
		std::cin >> value;

		if(value == "|"){
			break;
		}else{

			double val_num = std::stod(value);
			distances.push_back(val_num);
		}


	}while(std::cin);
	
	double sum = 0;

	for(int i=0; i < distances.size(); i++){

		sum += distances[i];
	}
	std::cout << "The total sum is equal to " << sum << " ." << std::endl;
	
	double min{0};
	double max{0};
	if(distances[1] > distances[0]){
		min = distances[0];
		max = distances[1];
	} else{
		min = distances[1];
		max = distances[0];
	}

	for(int i = 2; i < distances.size(); i++){
		if(distances[i] < min){
			min = distances[i];
		} else if (distances[i] > max){
			max = distances[i];
		}
	}
	std::cout << "The greatest distance is " << max << " ." << std::endl;
	std::cout << "The smallest distance is " << min << " ." << std::endl;
	std::cout << "The mean distance between two cities is equal to " << sum /(distances.size()) << std::endl;
	return 0;
}


