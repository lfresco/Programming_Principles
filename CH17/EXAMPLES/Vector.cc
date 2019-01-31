#include <iostream>

// Un' implementazione molto semplice e scema di un vettore di doubles

class vector {
	private:
		int sz;          //la dimensione del vettore
		double* elem;    //pointer al primo elemento (in questo caso un double)
	public:
		vector(int s)   //costruttore
			:sz{s},  //inzializza la dimensione del vettore
			elem{new double[s]} // inizializza elem come puntatore ad
					    // un array di doubles di dimensione s
			{
				for (int i = 0; i < s; ++i) elem[i] = 0; // iniziali
									//za gli ele
									//menti
			}
		int size() const { return sz;} //restituisce la dimensione del nostro vettore
		~vector() // destructor 
			{ delete[] elem; } //libera la memoria

		double get(int n) const {return elem[n]; } // access: read
		void set(int n, double v) {elem[n] = v; } //access : write
};

int main (int argv, char * argc[]) {

	vector v(5);

	for (int i = 0; i < v.size(); ++i) {
		v.set(i, 1.1 * i);
		std::cout << "v[" << i <<"]==" << v.get(i) << std::endl;
	}

	return 0;
}
