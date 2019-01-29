#include <iostream>
#include <vector>


enum class Month {
	Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
}; 
/*
Definizione dell'operatore di incremento unitario. 
*/
Month operator++(Month& m)    
{
	m = (m==Dec) ? Jan : Month(int(m) + 1); // ARITHMETIC IF dovuto al fatto che i mesi dopo dicembre ripartono da Gennaio
	return m;
}

int main(int argv, char * argc[]){

	Month m = Sep;
	++m; // diventa ottobre
	++m; // diventa Novembre
	++m; // diventa Dicembre
	++m; // diventa Gennaio
}

