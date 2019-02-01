#include <iostream>
#include <algorithm>
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

		vector(std::initializer_list<double> lst)     //initializer-list  
							      //costructor 
			:sz{lst.size()}, elem{new double[sz]} // memoria non inizz.
		{
			std::copy(lst.begin(), lst.end(), elem); //inizializza usando
								 //std::copy
		}
		
		vector(const vector& ); // copy constructor

		vector(vector&& a); // move constructor
		vector& operator=(vector&&); //move assignment
		
		int size() const { return sz;} //restituisce la dimensione del nostro vettore
		~vector() // destructor 
			{ delete[] elem; } //libera la memoria
		
		vector& operator=(const vector& ); // copy assignment
		double& operator[](int n) {return elem[n]; } // return reference		

		double get(int n) const {return elem[n]; } // access: read
		void set(int n, double v) {elem[n] = v; } //access : write
};

int main (int argv, char * argc[]) {

	vector v(5);

	for (int i = 0; i < v.size(); ++i) {
		v.set(i, 1.1 * i);
		std::cout << "v[" << i <<"]==" << v.get(i) << std::endl;
	}
	
	vector v2(10);
	for (int i = 0;i < v2.size(); i++) {
		v2[i] = i;
		std::cout << v2[i];
	}

	return 0;
}

vector::vector(const vector& arg) 
	:sz{arg.sz}, elem{new double[arg.sz]} // alloca gli elementi
	{
		std::copy(arg.elem, arg.elem + sz, elem); // inizializza gli elementi
	}




vector& vector::operator=(const vector& a) {
	
	double* p = new double[a.sz]; //alloca nuova memoria
	std::copy(a.elem, a.elem + sz, elem); // copia gli elementi
	delete[] elem; // dealloca il vecchio spazio
	elem = p; // assegna a elem il nuovo valore
	sz = a.sz; //assegna a sz il nuovo valore
	return *this; // ritorna una self reference

}

vector::vector(vector&& a)
	:sz{a.sz}, elem{a.elem} //copia elem e sz di a (del vettore che gli passiamo)
{	
	a.sz = 0;  //fa in modo che a diventi il vettore vuoto
	a.elem = nullptr;
}

vector& vector::operator=(vector&& a)
{
	delete[] elem; //dealloca il vecchio spazio
	elem = a.elem; //copia elem e sz dentro il nuovo vector
	sz = a.sz;
	// le due operazioni qua sotto fanno si che sia il vettore vuoto
	a.elem = nullptr;
	a.sz = 0;
	return *this; // ritorna una self reference
}
