#include <iostream>
#include <vector>

void error(std::string s){
	throw std::runtime_error(s);
}

int area(int length, int width){
	if(length <= 0 || width <= 0)
		error("non positive area() argument");
	return length * width;
}


int framed_area(int x, int y){
	constexpr int frame_width = 2;
	if(x - frame_width <= 0 || y - frame_width <= 0)
		error("non positive area() argument called by frame area()");
	return area(x - frame_width, y - frame_width);

}


int main(int argv, char * argc[]){
	
	int x = 11;
	int y = -4;
	int z = 4;

	int area1 = area(x,y);
	int area2 = framed_area(1,z);	



	return 0;
}
