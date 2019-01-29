#include <iostream>

enum class Month {
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

class Year {
		static const int max = 2200;
		static const int min = 1800;
	public :
		class Invalid{}; // per prendere l'eccezione in caso di inserimento di data invalida
		Year(int x): y{x} {if (x < min || max <= x) throw Invalid{};}
		int year () {return y;}
	private:
		int y;
}

class Date {
	public:
		Date(Year y, Month m, int d);
		// ...
	private:
		Year y; // anno
		Month m;
		int d; // giorno
};

