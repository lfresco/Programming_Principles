/*
Le liste sono una tra le data structures più comuni e utili. Si dividono in double
linked lists and single linked lists. Andiamo a vedere la seconda.
*/
#include <string>
#include <iostream>
struct Link {
	std::string value; // value we want to store
	Link* prev; // pointer all'elemento precedente
	Link* succ; // pointer all'elemento successivo
	Link(const std::string& v, Link* p = nullptr, Link* s = nullptr)
		:value{v}, prev{p}, succ{s} {} //constructor
};

Link* insert(Link* p, Link* n);
Link* add(Link* p, Link* n);  // inserisce il primo elemento dopo il secondo
Link* erase(Link* p); // elimina un elemento
Link* find(Link* p, const std::string& s); // trova un Link dato un valore
Link* advance(Link* p, int n); // si muove di n posizioni lungo la lista
void print_all (Link* p);

int main(int argv, char * argc[]) {

	Link* norse_gods = new Link{"Thor", nullptr,  nullptr}; // crea elemento Thor
	norse_gods = new Link{"Odin", nullptr, norse_gods}; // Odino precede Thor
	norse_gods -> succ -> prev = norse_gods;
	norse_gods = new Link{"Freia", nullptr, norse_gods}; // Freia precede Odino
	norse_gods -> succ -> prev = norse_gods;


	//Quindi con la nuova funzione quanto scritto sopra diventa
	Link* dei_nordici = new Link{"Thor"};
	dei_nordici = insert(dei_nordici, new Link{"Odino"});
	dei_nordici = insert(dei_nordici, new Link{"Freia"});
	dei_nordici = insert(dei_nordici, new Link{"Zeus"});	

	// Lists use
	Link* dei_greci = new Link("Hera");
	dei_greci = insert(dei_greci, new Link{"Athena"});
	dei_greci = insert(dei_greci, new Link{"Mars"});
	dei_greci = insert(dei_greci, new Link{"Poseidon"});

	// Abbiamo fatto alcuni errori. Correggiamoli usando funzioni
	// che abbiamo implementato

	Link* p = find(dei_greci, "Mars");
	if(p) p -> value = "Ares"; // if messo per evitare che p fosse un nullptr

	Link* q = find(dei_nordici, "Zeus");
	if(q) {
		if(q == dei_nordici) dei_nordici = q -> succ; //per evitare di eli
							      //minare il pointerprincipale
		Link* z = erase(q); //elimino q dalla lista dei_nordici
		dei_greci = insert(dei_greci,q); //aggiungo q alla lista dei_greci
	}

	print_all(dei_nordici);
	std::cout << std::endl;

	print_all(dei_greci);
	std::cout << std::endl;
}
/*
Questa funzione aggiunge p prima di n. Bisogna modificarla per fare si che tenga 
conto del fatto che p o n siano nullptr oppure che p non abbia un predecessore
*/

Link* insert(Link* p, Link* n){
	if(n == nullptr) return p;
	if(p == nullptr) return n;
	n -> succ = p; // p comes after n
	if(p->prev) p -> prev -> succ = n; //n viene dopo quello che era il predecessore di p
	n -> prev = p -> prev; //quello che veniva prima di p diventa quello che 
			       //viene prima di n
	p -> prev = n; // il predecessore di p diventa n
	return n;
}

Link* add(Link* p, Link* n) {
	// da implementare
}
/*
Elimina un Link dalla lista
*/
Link* erase(Link* p) {
	if(p == nullptr) return nullptr; // non possiamo eliminare niente
	if(p -> succ) p -> succ -> prev = p -> prev; // il precedente del successivo
						     // diventa il precedente di p
	if(p -> prev) p -> prev -> succ = p -> succ; // il successivo del precedente
						     // diventa il successivo di p
	return p-> succ;
}
/*
Questa funzione riceve in input il puntatore ad un elemento della lista e una
parola da cercare tra i valori. Scorre la lista e ritorna il pointer all'elemento
della lista che contiene la parola cercata.
*/
Link* find(Link*p, const std::string& s) {
	
	while(p) {
		if(p -> value == s) return p;
		p = p -> succ;
	}
	return nullptr; // nel caso in cui non abbia trovato la parola
}

/*
Questa funzione ci permette di muoverci lungo la lista. se n è positivo ci si muove
avanti se n è negativo ci si muove indietro. Ritorna nullptr se si vuole andare
in posti che non esistono
*/
Link* advance(Link* p, int n) {
	if(p == nullptr) return nullptr;
	if(0 < n) { // controlla se vogliamo andare avanti
		while(n--) { // fino a che non diventa negativo
			if(p -> succ == nullptr) return nullptr; // se non ha succe
								 //ssori ritorna null
			p = p -> succ; // se ha successori mi sposto di uno
		}
	} else if (n < 0) {  // controlla se vogliamo andare indietro
		while(n++) { // va indietro fino a che n non è postivo
			if(p -> prev == nullptr) return nullptr; 
			p = p -> prev; 
		}
	}
	return p;
}

void print_all (Link* p) {
	std::cout << "{" ;
	while(p) {
		std::cout << p -> value;
		if(p = p -> succ) std::cout << ", ";
	}
	std::cout << "}" ;
}




