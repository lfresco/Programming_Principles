#include <iostream>
#include <vector>


int main(int argv, char * argc[]){
	std::cout << "Write a maximum number up to which you want to search for prime numbers." << std::endl;
	int max;
	std::cin >> max;
	std::vector<bool> primes(max);
	primes[2] = 1;
	for(int i = 3;i < primes.size();i++){
		int j{2};
		while(j < i){
			if(i % j == 0){
				break;
			}
			++j;

		}
		if(i == j){
			primes[i] = 1;
		}

	}

	std::cout << "The prime numbers we have found are " << std::endl;
	for(int i = 0; i < primes.size(); i++){
		if(primes[i] == 1){
			std::cout << i << std::endl;
		}
	}




	return 0;
}
