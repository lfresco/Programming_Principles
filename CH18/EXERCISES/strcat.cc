#include <string>
#include <iostream>

std::string str_cat(const std::string& parola1, const std::string& parola2) {
	std::string ritornare = parola1 + "." + parola2;
	return ritornare;
}

std::string str_dot(const std::string& parola1, const std::string& parola2, const std::string& parola3) {
	std::string ritornare = parola1 + "." + parola3 + "." + parola2;
	return ritornare;
}

char* str_dot(const char* s1, const char* s2) {
	
	//Dobbiamo allocare una porzione di memoria abbastanza grande da contenere le due parole. 
	// Come prima cosa dobbbiamo andare a recuperarci la dimensione delle due stringhe

	int size_s1 = 0;
	while(*s1) size_s1 ++;

	int size_s2 = 0;
	while(*s2) size_s2 ++;

	char* s3 = new char[size_s1 + size_s2 + 2]; // il + 2 è perchè l'ultimo carattere deve essere uno zero  e in mezzo ci devo mettere un punto

	// Adesso dobbiamo copiare. Farei due cicli for perchè mi sembra più facile :)
	char* s3_ptr = s3; //Puntatore che useremo per muoverci lungo l'array per copiare;
	
	char* p = s1;
	while(*p) *s3_ptr ++ = *s1 ++; //fino a che p non punta a zero copiamo gli elementi di s1 in s3

	*s3_ptr ++ = '.'; //aggiunge il punto tra le due parole

	p = s2; // adesso devo copiare la seconda parola

	while(*p) *s3_ptr++ = *p++; // stesso meccanismo di prima

	*s3_ptr = 0; // aggiunge zero come ultimo numero.

	return s3;



}

int main(int argv, char* argc[]) {

	std::cout << "Digitare due parole. Verranno restiute separate da un punto" << std::endl;

	std::string parola1, parola2;
	std::cin >> parola1 >> parola2;
	
	std::string parole_unite = str_cat(parola1, parola2);

	std::cout << parole_unite << std::endl;

	std::cout << "Digitare due parole. " << std::endl;
	std::string word1, word2;
	std::cin >> word1 >> word2;
	std::cout << "Inserire una parola da buttarci in mezzo" << std::endl;
	std::string word3;
	std::cin >> word3;

	std::string treParole = str_dot(word1, word2, word3);
	std::cout << treParole << std::endl;

	char* s1 = "cazzo";
	char* s2 = "culo";
	
	char* s3 = str_dot(s1, s2);

	std::cout << s3 << std::endl;
	delete[] s3;





}


