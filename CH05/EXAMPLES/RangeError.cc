#include <iostream>
#include <vector>

class out_of_range {} ;

int main(int argv, char * argc[]){
	try{
		std::vector<int> v;
		for(int x; std::cin >> x;){
			v.push_back(x);
		}
		for(int i = 0; i <= v.size();i++){
			std::cout << "v["<< i << "]== " << v[i] << std::endl;
		}
	} catch(out_of_range){
		std::cerr << "Oops! Range error!" << std::endl;
		return 1;
	}

	return 0;



	return 0;
}
