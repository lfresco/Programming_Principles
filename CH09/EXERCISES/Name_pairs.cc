#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/*
EX 2 : creazione della classe e dei metodi principali

EX 3 : overload degli operatori << , == e != . Per fare questo mi servono anche metodi get_name e get_age;

*/



class Name_pairs {
	public:
		void print() const;
		void read_names();
		void read_ages();
		void sort();
		const std::vector<double>& get_age()const {return age;}
		const std::vector<std::string>& get_name() const {return name;}
	
	private:
		std::vector<std::string> name;
		std::vector<double> age;


};
/*
Implementata perchè molto spesso viene richiesta durante lo studio di Programming Principles
*/
void error(std::string s) {
	throw std::runtime_error(s);
}

void sort_names(std::vector<std::string>& name) {
	std::sort(name.begin(),name.end());
}
/*
Prompta l'utente ad inserire i nomi che vuole salvare. 
*/
void Name_pairs::read_names() {

	std::cout << "Enter the names, write quit to stop" << std::endl;
	std::string s;
	while (std::cin >> s && s != "quit"){
		name.push_back(s);
		
	}

}
/*
Chiede all'utente di inserire all'interno dell'oggetto l'età dei nomi che ha salvato. 
*/
void Name_pairs::read_ages() {
	if (name.size() > 0) {
		int index = 0;
		if(age.size() > 0) {
			index = age.size(); // questo è per evitare che l'utente vada a sovrascrivere le età già inserite
		}
		
		for (int i = index; i < name.size(); ++i) {
			std::cout << "Please enter the age of " << name[i] << ": ";
			double input;
			std::cin >> input;
			if(!std::cin) {
				error("Bad input revieved. Cannot continue.");
			} else if (input < 0) {
				std::cout << "Invalid age." <<std::endl;
				--i;
			} else {
				age.push_back(input);
			}
		}
	} else {
		std::cout << "Please enter names first!" << std::endl;
	}
}
/*
Stampa nome e età in questo modo (nome,età)
*/
void Name_pairs::print() const {
	if (name.size() != age.size()) {
		error("Something wrong here!");
	} else {
		for(int i = 0; i < name.size(); i++) {
			std::cout << "(" << name[i] << "," << age[i] << ")" << std::endl;
		}
	}
}
/*
Funzione che ci permette di ordinare le date e poi assegnare l'età corretta. 
*/
void Name_pairs::sort() {
	
	std::vector<std::string> tmp_name = name; // questo vettore ci servirà per fare il confronto con il vettore ordinato
	sort_names(name); //utilizziamo l'algoritmo di sort della std library 

	std::vector<double> sorted_ages; // conterrà le età ordinate
	for(int i = 0; i < name.size(); ++i) {
		for(int j = 0; j < name.size(); j++) {
			if(name[i] == tmp_name[j]) {
				sorted_ages.push_back(age[j]);
			}
		}
	}
	
	age = sorted_ages; 

}
/*
overload dell'operatore << permette di stampare senza utilizzare metodo print
*/
std::ostream& operator<<(std::ostream& os, const Name_pairs& np){
	for(int i = 0; i < np.get_name().size(); i++){
		os << "( " << np.get_name()[i] << ", " << np.get_age()[i] << " )" << std::endl;
	}
	return os;
}

bool operator==(const Name_pairs& np1, const Name_pairs& np2) {
	if(np1.get_name().size() != np2.get_name().size()) {
		return false;
	} else {
		
		int index  = 0;
		while(index < np1.get_name().size()){
			if((np1.get_name()[index] == np2.get_name()[index]) && (np1.get_age()[index] == np2.get_age()[index])){
				index ++;
			} else {
				return false;
			}
		if(index = (np1.get_name().size() -1) ) 
			return true;
		}
	}
}

bool operator!=(const Name_pairs& np1, const Name_pairs& np2){
	return !(np1==np2);
}

int main(int argv, char * argc[]){
	Name_pairs np1;
	np1.read_names();
	np1.read_ages();
	std::cout << std::endl;
	np1.print();
	std::cout << "Proviamo adesso ad ordinarle" << std::endl;
	np1.sort();
	np1.print();
	std::cout << "Proviamo ora ad usare l'operatore con l'overload." << std::endl;
	std::cout << np1;
	std::cout << "Creiamo un altro oggetto per testare operatore == " << std::endl;
	Name_pairs np2;
	np2.read_names();
	np2.read_ages();

	bool test1 = (np1 == np2);
	std::cout << "The result of the test is " << test1 << std::endl;
	return 0;
}
