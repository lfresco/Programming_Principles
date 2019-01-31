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
	
	/*
	#################################################
	/SECOND PART OF THE DRIL
	#################################################
	*/

	// 1) Allocate an int, initialize it to 7, and assign its address to 
	// a variable p1

	int x{7};
	int* p1 = &x;

	// 2) Stampare il valore di p1 e dell'int a cui punta

	std::cout << "p1 è uguale a " << p1 << std::endl;
	std::cout << "p1 sta puntando a " << *p1 << std::endl;

	// 3) allocare un array di 7 int, inizializzarli a 1,2,4,8 e assegnare il 
	// suo indirizzo di memoria a p2
	
	int* h = new int[7];
	h[0] = 1;
	for(int i = 1; i < 7; i++) {
		h[i] = h[i - 1] *2;
	}
	int* p2 = h;
	
	// 4) Stampare il valore di p2 e dell'array a cui punta

	std::cout << "Il valore di p2 è " << p2 << std::endl;
	print_array(h,7);
	
	// 5) Dichiarare un int* chiamato p3 e inizializzarlo con p2

	int* p3 = p2;

	// 6) Assegnare p1 a p2
	
	p1 = p2;

	// 7) Assegnare p3 a p2

	p2 = p3;

	// 8) Stampare p1 e p2 e vedere a cosa puntano

	std::cout << "p1 è uguale a " << p1 << std::endl;

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
