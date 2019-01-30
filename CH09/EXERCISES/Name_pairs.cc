#include <iostream>
#include <vector>
#include <string>

class Name_pairs {
	public:
		void print() const;
		void read_names();
		void read_ages();
		void sort();
	
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
	
void Name_pairs::print() const {
	if (name.size() != age.size()) {
		error("Something wrong here!");
	} else {
		for(int i = 0; i < name.size(); i++) {
			std::cout << "(" << name[i] << "," << age[i] << ")" << std::endl;
		}
	}
}


int main(int argv, char * argc[]){
	Name_pairs np1;
	np1.read_names();
	np1.read_ages();
	std::cout << std::endl;
	np1.print();

	return 0;
}
