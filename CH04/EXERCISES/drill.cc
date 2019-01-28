#include <iostream>
#include <vector>
#include <algorithm>




int main(int argv, char * argc[]){
	int counter{0};
	double largest;	
	double smallest;
	double total{0};
	std::vector<double> vector_of_m = {0}; 

	/* do{
		std::cout << "Enter two integers" << std::endl;
		std::string str1;
		std::string str2;
		
		std::cin >> str1 >> str2;
		if((str1 == "|") ||(str2 == "|")){
			break;
		}else{
			double num1 = std::stod(str1);
		        double num2 = std::stod(str2);
			std::cout << "You entered the following two integers: " << num1 << " and " << num2 << std::endl;
		
			if(num1 > num2){
				std::cout << "The larger value is " << num1 << std::endl;
				std::cout << "The smaller value is " << num2 << std::endl;

			}else if(num2 > num1){
				std::cout << "The larger value is " << num2 << std::endl;
		                std::cout << "The smaller value is " << num1 << std::endl;
			}else{
				std::cout << "The two numbers are equal." << std::endl;
			}

			if((num1-num2)< (1.0/100)){
				std::cout << "The two numbers are almost equal." << std::endl;
			}

		}




	}while(std::cin);*/

	/*do{
		std::cout << "Enter a double and an unit of measure." << std::endl;
		double num;
		std::string uom;
		std::cin >> num >> uom;

		std::cout << "You entered " << num << std::endl;
		
		if(counter >= 2 ){
			if(num > largest){
				largest = num;
				std::cout << "The largest by far!" << std::endl;
			} else if(num < smallest){
				smallest = num;
				std::cout << "The smallest by far!" << std::endl;
			}
		} else if(counter == 0){
			++counter;
			smallest = num;
			std::cout << "The first one so we consider it as the smallest."<< std::endl;
			

		}else if(counter == 1){
			if(num > smallest){
				++counter;
				largest = num;
				std::cout << "The largest by far." << std::endl;
				
			}else{
				++counter;
				largest = smallest;
				smallest = num;
				std::cout << "The smallest by far!" << std::endl;
				
			}
		}


		



	}while(std::cin);*/

	do{
		std::cout << "Enter a double followed by in, cm, m or ft." << std::endl;
		double value;
		std::string uom;
		std::cin >> value >> uom;

		double meters{0};  // first i convert the value in meters

		if(uom == "in"){
		
			meters = (value / 2.54) / 100;
		}else if(uom == "m"){
			
			meters = value;
		}else if(uom == "ft"){
			
			meters = ((value / 12) / 2.54) / 100;
		} else if(uom == "cm"){
			meters = value / 100;
		}else{	
		
			std::cout << "Not a valid unit of measure" << std::endl;
			break;
		}

		total += meters;

		if(counter >= 2 ){
	       		 if(meters > largest){
				largest = meters;
				std::cout << "The largest by far!" << std::endl;
				++counter;
			 } else if(meters < smallest){
				smallest = meters;
				std::cout << "The smallest by far!" << std::endl;
				++counter;
			}else {++counter;}
		} else if(counter == 0){
			        ++counter;
			        smallest = meters;
			        std::cout << "The first one so we consider it as the smallest."<< std::endl;
			
                }else if(counter == 1){
                         if(meters > smallest){
                                ++counter;
				largest = meters;
				std::cout << "The largest by far." << std::endl;
                        }else{
                                ++counter;
                                largest = smallest;
                                smallest = meters;
                                std::cout << "The smallest by far!" << std::endl;
                       }
               }	

		
		vector_of_m.push_back(meters);





	}while(std::cin);
	std::sort(vector_of_m.begin(),vector_of_m.end());
	std::cout << "The total amount of meters is equal to: " << total << std::endl;
	std::cout << "The entered values converted into meters are:"<< std::endl;
	for(int i = 1; i < counter + 1; i++){
		std::cout << vector_of_m[i] << std::endl;
	}

	return 0;
}










