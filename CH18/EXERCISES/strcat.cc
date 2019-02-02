#include <string>
#include <iostream>

std::string str_cat(const std::string parola1, const std::string parola2) {
	std::string ritornare = parola1 + "." + parola2;
	return ritornare;
}

int main(int argv, char* argc[]) {

	std::cout << "Digitare due parole. Verranno restiute separate da un punto" << std::endl;

	std::string parola1, parola2;
	std::cin >> parola1 >> parola2;
	
	std::string parole_unite = str_cat(parola1, parola2);

	std::cout << parole_unite << std::endl;
}
