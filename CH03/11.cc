#include <iostream>

void information_output(int five_cents, int ten_cents, int twenty_cents, int fifty_cents);
double from_coins_to_euros(int five_cents, int ten_cents, int twenty_cents, int fifty_cents);
int main(int argv, char * argc[]){

	std::cout << "How many 5 cents coins do you have?" << std::endl;
	int five_cents;
	std::cin >> five_cents;
	std::cout << "How many 10 cents coins do you have?" << std::endl;
	int ten_cents;
	std::cin >> ten_cents;
	std::cout << "How many 20 cents coins do you have?" << std::endl;
	int twenty_cents;
	std::cin >> twenty_cents;
	std::cout << "How many 50 cents coins do you have?" << std::endl;
	int fifty_cents;
	std::cin >> fifty_cents;

	information_output(five_cents,ten_cents,twenty_cents,fifty_cents);




	return 0;
}

void information_output(int five_cents, int ten_cents, int twenty_cents, int fifty_cents){

	std::cout << "You've got " << five_cents << " 5 cents coins." << std::endl;
       	std::cout << "You've got " << ten_cents << " 10 cents coins." << std::endl;
	std::cout << "You've got " << twenty_cents << " 20 cents coins." << std::endl;
	std::cout << "You've got " << fifty_cents << " 50 cents coins." << std::endl;
	int total = five_cents + ten_cents + twenty_cents + fifty_cents;
	std::cout << "This amounts to a total of " << total << "coins." << std::endl;
	double euros = from_coins_to_euros(five_cents,ten_cents,twenty_cents,fifty_cents);
	std::cout << "For a total of " << euros << "euros." << std::endl;	

}

double from_coins_to_euros(int five_cents, int ten_cents, int twenty_cents, int fifty_cents){

	double euros = 0.05* five_cents + 0.1* ten_cents + 0.2 * twenty_cents + 0.5 * fifty_cents;
	return euros;
}
