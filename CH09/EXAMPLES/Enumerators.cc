#include <iostream>

enum class Month {
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

enum class Day {
	monday, tuesday, wednesday, thursday, friday, saturday, sunday
};

enum Month {
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, opt, nov, dec
};

int main (int argv, char * argc[]){

	Month m = Month::feb;

	Month m2 = feb; 
	m = 7;
	int n = m;
	Month mm = Month(7); // In this case the conversion will not work as the int type doesn't have a Month equivalent while Month has its integer equivalent.
	Month m = feb;  // Si può fare perchè feb è in scope
	Month m2 = Month::feb; // anche questo è ok
	m = 7;  // error : non si può assegnare un intero ad un mese
	int n = m; // però si può convertire un mese in un intero
	Month mm = Month(7); // OK: conversione implicita (non è controllata!!)	


	return 0;
}

Month int_to_Month(int x) {
	if(x > int(Month::jan) || int(Month::dec) > x){
		return Month(x);
	} else {
		std::cout << "Error!" << std::endl;
	}
} 


