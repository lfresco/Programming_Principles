#include <iostream>
#include <vector>

std::vector<int> gv{1,2,4,8,16,32,64,128,256,512};

void f(std::vector<int> vector) {
	
	std::vector<int> lv(10);
	
	std::cout << "The local array now contains" << std::endl;
	
	for(int i = 0; i < vector.size(); i++) {
		lv[i] = vector[i];
		std::cout << lv[i] << std::endl;
	}

	std::vector<int> lv2 = vector;
	
	std::cout << "Questo è invece il secondo array" << std::endl;
	
	for(int i = 0; i < lv2.size(); i++) {
		std::cout << lv2[i] << std::endl;
	}

}

int main(int argv, char * argc[]) {
	
	f(gv);
	
	std::vector<int> vv(10);
	
	vv[0] = 1;

	for(int i = 1; i < 10; i++ ){
		
		int valore = (i + 1 ) * vv[i - 1];
		vv[i] = valore;
	}

	f(vv);
}
