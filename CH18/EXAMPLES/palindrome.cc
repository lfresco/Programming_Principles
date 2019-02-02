#include <iostream>
#include <string>
#include <cstring>



/**
* Is palindrome using std::string
**/ 
bool is_palindrome (const std::string& s)
{
	int first = 0; // indice della prima lettera
	int last = s.length() - 1; //indice dell'ultima lettera
	while(first < last) {
		if(s[first] != s[last]) return false; 
		++first;
		--last;
	}
	
	return true;
}

/*
 * Is palindrome using arrays
*/

bool is_palindrome(const char s[], int n) {
	int first = 0;
	int last = n - 1;
	while(first < last) {
		if(s[first] != s[last]) return false;
		++first;
		--last;
	}

	return true;
}

std::istream& read_word(std::istream& is, char * buffer, int max) {
	is.width(max);
	is >> buffer;

	return is;
}

bool is_palindrome(const char* first, const char* last) {
	while(first < last) {
		if(*first != *last) return fals;
		++first;
		--last;
	}
	return true;
}


int main(int argv, char * argc[]) {
	/*
	for(std::string s; std::cin >> s;) {
		std::cout << s << " is " ;
		if(!is_palindrome(s)) std::cout << "not" ;
		std::cout << " a palindrome\n" ;
	}
	*/

	constexpr int max = 128;
	for(char s[max]; read_word(std::cin, s, max); ){
		std::cout << s << " is ";
		if(!is_palindrome(s, std::strlen(s))) std::cout << "not ";
		std::cout << "a palindrome\n";
	}
}
