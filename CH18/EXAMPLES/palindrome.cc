#include <iostream>
#include <string>
/*

*/

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


int main(int argv, char * argc[]) {

	for(std::string s; std::cin >> s;) {
		std::cout << s << " is " ;
		if(!is_palindrome(s)) std::cout << "not" ;
		std::cout << " a palindrome\n" ;
	}
}
