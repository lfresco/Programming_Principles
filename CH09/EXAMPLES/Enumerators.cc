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
	Month mm = Month(7); 


	return 0;
}
