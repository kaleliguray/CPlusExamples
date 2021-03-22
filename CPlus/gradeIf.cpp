#include <iostream>

int main(){
	int grade = 59;

	if(grade > 60){
		std::cout << "Pass\n";
	}else {
		std::cout << "Fail\n";
	}


	//Another example for if 
	double ph = 4.6;

	if(ph > 7){
		std::cout << "Basic\n";
	}else if(ph < 7){
		std::cout << "Acidic\n";
	}else {
		std::cout << "Neutral\n";
	}

}