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

