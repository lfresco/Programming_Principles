#include <iostream>

enum class Month {
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

enum class Day {
	monday, tuesday, wednesday, thursday, friday, saturday, sunday
};

int main (int argv, char * argc[]){

	Month m = Month::feb;

	Month m2 = feb; 
	m = 7;
	int n = m;
	Month mm = Month(7); // In this case the conversion will not work as the int type doesn't have a Month equivalent while Month has its integer equivalent.
	


	return 0;
}

Month int_to_Month(int x) {
	if(x > int(Month::jan) || int(Month::dec) > x){
		return Month(x);
	} else {
		std::cout << "Error!" << std::endl;
	}
} 


