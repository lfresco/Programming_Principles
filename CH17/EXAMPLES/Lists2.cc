#include <iostream>
#include <string>

class Link {
	public:
		std::string value;

		Link(const std::string& v, Link* p= nullptr, Link* s= nullptr)
			: valude{v}, prev{p}, succ{s} {}

		Link* insert(Link* n); // inserisce un nuovo elemento prima di questo
		Link* add(Link* n); // inserisce un nuovo elemento dopo di questo
		Link* erase(); // elimina questo oggetto dalla lista
		Link* find(const std::string& s); // trova s nella lista
		const Link* find(const std::string& s) const; //trova s in const list

		Link* advance(int n) const; // si muove di n posizioni nella lista

		Link* next() const { return succ; } // ritorna pointer al successivo
		Link* prev() const { return prev; } // ritorna pointer al precedente
	
	private:
		
		Link* prev;
		Link* succ;
};

int main(int argv, char * argc[]) {
	std::cout << "Compila" << std::endl;
	return 0;

}

Link* Link::insert(Link* n) {
	
	if(n == nullptr) return this; // niente da inserire
	if(p == nullptr) return n; // niente in cui inserire

	n -> succ = this; // fa sì che questo oggetto sia il successore di n
	if(prev) prev -> succ = n; // fa sì che il predecessore
				// di questo oggetto diventi il predecessore di n
	n -> prev = prev; 
	prev = n;
	return n;
	// non specifico mai this perchè possiamo accedere direttamente ai members
}






