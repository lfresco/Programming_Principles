#include <iostream>
#include <vector>

int area(int length, int width){
	return length * width;
}
int framed_area(int x, int y){
	return area(x - 2, y - 2);
}
void error (std::string s){
	  throw std::runtime_error (s);
}


int main(int argv, char * argc[]){

	int x = -1;
	int y = 2;
	int z = 4;

	if(x <= 0 || y <= 0) error("non positive arguments");
	
	int area1 = area(x,y);

	if(z <= 2)
		error("non positive 2nd area() argument called by framed_area()");

	int area2 = framed_area(1,z);

	if(y <= 2 || z <= 2)
		error("non positivee area() argument called by framed_area()");

	int area3 = framed_area(y, z);
	double ratio = double(area1)/area3;


	return 0;
}
