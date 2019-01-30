#include <iostream>
#include <vector>
#include <string>

class Books {
	public:
		std::string get_ISBN() { return ISBN; }
		std::string get_title() { return title; }
		std::string get_author() { return author; }
		void check_book();
		Books(std::string ISBN, std::string title, std::string author); 
	private:
		std::string ISBN;
		std::string title;
		std::string author;
		bool checked_out{false};


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
}
