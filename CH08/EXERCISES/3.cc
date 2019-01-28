#include <iostream>
#include <vector>



void print(const std::vector<int>& vector, std::string label);
void fibonacci(int x, int y, std::vector<int>& vector, int n);

int main(int argv, char * argc[]){
	std::cout << "Enter the first two arguments of the Fibonacci sequence." << std::endl;

	int x;
	int y;
	std::cin >> x >> y;
	std::cout << "Enter the number of the sequence you want to compute." << std::endl;
	int n;
	std::cin >> n;
	std::string label{"The Fibonacci you asked for."};
	std::vector<int> vector(n);

	fibonacci(x, y, vector, n);

	print(vector, label);
	
	return 0;

}

void print(const std::vector<int>& vector, std::string label){
	std::cout << "The label is " << label << std::endl;
	for(int i = 0; i < vector.size(); i++){
               std::cout << "v["<< i << "] = " << vector[i] << std::endl;
	}
}

void fibonacci(int x, int y, std::vector<int>& vector, int n){
	
	vector[0] = x;
	vector[1] = y;
	for(int i = 2; i < n; i++ ){
		vector[i] = vector[i - 2] + vector[i-1];
	}

}
