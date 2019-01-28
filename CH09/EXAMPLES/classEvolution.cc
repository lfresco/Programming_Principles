#include <iostream>
#include <vector>

struct Date {
	int y;
	int m;
	int d;
	Date(int y, int m, int d);
	void add_day(int n);
};

class date{
public:
	Date(int y, int m, int d);
	void add_day(int n);
	int month() {return m;}
	int day() {return d;}
	int year() {return y;}
private:
	int y, m, d;
};

Date::Date(int yy, int mm, int dd)
	:y{yy}, m{mm}, d{dd}
{
}


void init_day(Date& dd, int y, int m, int d){

}

int main(int argv, char * argc[]){

	Date today;

	today.y = 2019;
	today.m = 1;
	today.d = 3;

	return 0;
}
