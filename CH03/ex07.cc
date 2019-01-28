#include <iostream>

int main(int argv, char * argc[]){

	std::cout << "Enter three strings that you want to be ordered" << std::endl;
	std::string string1;
	std::string string2;
	std::string string3;

	std::cin >> string1 >> string2 >> string3;
	
	std::string max;
	std::string medium;
	std::string min;


	if((string1 > string2) && ( string1 > string3) ){
		                max = string1;
		                if(string2 > string3){
			                medium = string2;
			                min = string3;
			        }else{
				        medium = string3;
				        min = string2;
		                }


        }
	if((string2 > string1) && (string2 > string3) ){
			       max = string2;
			       if(string1 > string3){
				        medium = string1;
				        min = string3;

                               }else{
				        medium = string3;
			                min = string1;
                              }

       }

       if((string3 > string1) && (string3 > string2)){
		             max =string3;
	                     if(string1 > string2){
				       medium = string1;
				       min = string2;
			     }else{
			               medium = string2;
			               min = string1;
																				               
                             }

    }

    std::cout << min << ", " << medium << ", " << max << std::endl;









	return 0;
}

