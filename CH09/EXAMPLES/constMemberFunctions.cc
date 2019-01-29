#include <iostream>
class Date {
	public:
		//...
		int day() const; //const member: can't modify the object
		Month month() const;
		int year() const;

		void add_day(int n); //non-const : the object can be modified
		void add_month(int n);
		void add_year(int n);

	private:
		int y;
		Month m;
		int d;
};
int main(int argv, char * argc[]) {
	Date d {2000, Month::jan, 21};
	const Date cd {2001, Month::feb, 21};
	// Supponiamo di aver fatto l'overload dell'operatore
	std::cout << d.day() << " - " << cd.day() << std::endl
	d.add_day(1); // Si può fare
	cd.add_day(1); // Non si può fare
	return 0;
}
