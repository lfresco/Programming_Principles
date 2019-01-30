#include <iostream>

// Un' implementazione molto semplice e scema di un vettore di doubles

class vector {
	private:
		int sz;          //la dimensione del vettore
		double* elem;    //pointer al primo elemento (in questo caso un double)
	public:
		vector(int s);  //constructor: allocherà memoria per s doubles e fa si che elem punti ad essi, e salverà s in sz
		int size() const { return sz;} //restituisce la dimensione del nostro vettore

};

