#include <vector>
#include <string>
#include <iostream>

void print_array10( int* a);
void print_array(int* a, int n);
void init_array(int* a, int n );
void init_vector(std::vector<int>& v);
void print_vector(const std::vector<int>& v);

int main(int argv, char * argc[]) {
	//1) Alloca un array di dieci int utilizzando new

	int * a = new int[10];
	// 2) Stampa i valori degli interi
	std::cout << "a stampato senza usare nessuna funzione" << std::endl;
	for (int i  = 0; i < 10 ; i++) {
		std::cout << "a[" << i << "] == " << a[i] << std::endl;
	}
	
	// 3) Dealloca l'array

	delete[] a;

	// 4) scrivere una funzione print_array10 che stampa i valori di a
 	
	std::cout << "a stampato con la funzione" << std::endl;
	print_array10(a);
	
	// 5) Allocare un array di 10 int sull'heap con valori 101,102 ecc e 
	// stampalo

	int* b = new int[10];
	for(int i = 0; i < 10; i ++) {
		b[i] = 100 + i; 
	}
	std::cout << "b stampato usando la funzione print_array10" << std::endl;
	print_array10(b);
	
	delete[] b;
	// 6) Allocare un array di 11 elementi, inzializzarlo sempre con i valori
	// 100, 101, ... e poi stamparlo

	int* c = new int[11];
	for(int i = 0; i < 11; i ++) {
		c[i] = 100 + i;
	}
	std::cout << "c stampato senza funzione" << std::endl;
	for(int i = 0; i < 11; i++) {
		std::cout << "c[" << i << "] == " << c[i] << std::endl;
	}
	
	// 7) Scrivere funzione che stampa un array una volta indicata la sua 
	// dimensione e passatogli un pointer
	std::cout << "c stampato usando la funzione" << std::endl;
	print_array(c, 11);
	delete[] c;

	// 8) Allocare un array di 20 elementi, inizializzarlo (meglio se scrivo una
	// funzione) e poi stamparlo usando print_array().
	std::cout << "L'array da 20 elementi" << std::endl;
	int* d = new int[20];
	init_array(d, 20);
	print_array(d,20);
	delete[] d; 

	// 9) rifare i punti 5, 6 e 8 utilizzando std::vector e scrivere la funzione
	// print_vector.

	std::vector<int> e(10);
	init_vector(e);
	std::cout << "vettore e stampato usando la funzione print_array" << std::endl;

	print_vector(e);

	std::vector<int> f(11);
	init_vector(f);
	std::cout << "vettore f di 11 elementi " << std::endl;
	print_vector(f);

	std::vector<int> g(20);
	init_vector(g);
	std::cout << "vettore g di 20 elementi" << std::endl;
	print_vector(g);

	return 0;
}

void print_array10( int* a) {
	
	for(int i = 0; i < 10; i++) {
		std::cout << "a["<< i <<"] == " << a[i] << std::endl;
	}
	
	
}

void print_array(int* a, int n) {
	
	for(int i = 0; i < n; i++) {
		std::cout << "array[" << i << "] == " << a[i] << std::endl;
	}
}

void init_array(int* a, int n) {
	
	for(int i = 0; i < n; i++) {
		a[i] = 100 + i;
	}
}

void init_vector(std::vector<int>& v) {
	
	for(int i = 0; i < v.size(); i++) {
		v[i] = 100 + i;
	}
}

void print_vector(const std::vector<int>& v) {
	
	for(int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] == " << v[i] << std::endl;
	}
}
