/*
Le liste sono una tra le data structures più comuni e utili. Si dividono in double
linked lists and single linked lists. Andiamo a vedere la seconda.
*/
#include <string>

struct Link {
	std::string value;
	Link* prev;
	Link* succ;
	Link(const std::string& v, Link* p = nullptr, Link* s = nullptr)
		:value{v}, prev{p}, succ{s} {}
};

Link* insert(Link* p, Link* n); 

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
