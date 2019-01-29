class Date {
	public:
		//...
		Date(); // questo è il default constructor
		//...
	private:
		int y;
		Month m;
		int d;

};
/*
Questa maniera abbastanza macchinosa di definire il default constructor può essere evitata andando a dare dei valori di default ai parametri all'interno della dichiarazione
della classe
*/
Date::Date()
	:y{2001}, m{Month::jan}, d{1}
{
}

class Date {
	public:
		//...
		Date();
		//...
	private:
		int y{2001};
		Month m{Month::jan};
		int d{1};
};
