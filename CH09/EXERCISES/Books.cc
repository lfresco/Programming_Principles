#include <iostream>
#include <vector>
#include <string>
/*
EX 5 build classes and principal methods

EX 6 overload of the operators ==, != and << (the first two must check the ISBNs strings)

EX 7 create a enum class Genre 
*/



class Books {
	public:
		enum Genre {
			fiction = 0, nonfiction, periodical, biography, children 
		};
		const std::string& get_ISBN() const { return ISBN; }
		const std::string& get_title() const { return title; }
		const std::string& get_author() const { return author; }
		const Genre get_genre() const { return genre; } 
		void check_book();
		Books(std::string ISBN, std::string title, std::string author, Genre g); 
	private:
		std::string ISBN;
		std::string title;
		std::string author;
		bool checked_out{false};
		Genre genre;

};
/*
Questa funzione controlla se il libro a cui si fa rifermimento è stato o meno dato in prestito. Dopo aver fatto il controllo viene chiesto all'utente se intende restituirlo (nel caso in cui fosse stato preso in prestito) oppure se vuole prenderlo in prestito. 

*/
void Books::check_book() {
	 if (checked_out == false) {
	 	std::cout << "Do you want to check out this book(y / n))?" << std::endl;
		std::string answer;
		std::cin >> answer;
		if(answer == "y") {
			checked_out = true;
		} else {
			return;
		}
		
	 } else {
	 	std::cout << "Do you want to check in this book ?" << std::endl;
		std::string answer;
		std::cin >> answer;
		if(answer == "y") {
			checked_out = false;
		} else {
			return;
		}
	 }
}

/*
Costruttore. Al momento della creazione dell'oggetto viene chiesto all'utente di fornire le informazioni mediante standard input. Durante questa fase viene validato. 
*/
Books::Books(std::string ISBN1, std::string title1, std::string author1){
	title = title1;
	ISBN = ISBN1;
	author = author1;
	checked_out = false;
}
/*
Aggiungiamo qua sotto l'implementazione degli operatori di confronto. 
*/
bool operator==(const Books& b1, const Books& b2) {
	std::string ISBN1 = b1.get_ISBN();
	std::string ISBN2 = b2.get_ISBN();
	if (ISBN1 == ISBN2) {
		return true;
	} else {
		return false;
	}
}

bool operator!=(const Books& b1, const Books& b2) {
	return !(b1 == b2);
}

std::ostream& operator<<(std::ostream& os, const Books& b1) {
	std::string ISBN = b1.get_ISBN();
	std::string title = b1.get_title();
	std::string author = b1.get_author();
	os << "ISBN : " << ISBN << "\n" << "Title : " << title << "\n" << "Author : " << author << std::endl;
	return os;
}
int main (int argv, char * argc[]) {
	std::cout << "How many books do you wnat to register?" << std::endl;
	int answer;
	std::cin >> answer;
	std::vector<Books> books = std::vector<Books>();

	for (int i = 0; i < answer; i++){
		std::cout << "Enter ISBN" << std::endl;
		std::string ISBN;
		std::cin >> ISBN;
		std::cout << "Enter author" << std::endl;
		std::string author;
		std::cin >> author;
		std::cout << "Enter title" << std::endl;
		std::string title;
		std::cin >> title;
		Books book = Books(ISBN, title, author);
		books.push_back(book);

	}
	std::cout << "Proviamo se stampa" << std::endl;
	for(int i = 0; i < books.size(); i++) {
		std::cout << "Book n " << i <<"\n" << books[i];
	}
}

