
#include <iostream>

int main(){
	
	std::string dogName;

	std::cout << "Enter Your Dog's Name: ";
	
	std::cin >> dogName;
	
	int dogAge;

	std::cout << "\nEnter Your Dog's Age In Calendar years: ";
	
	std::cin >> dogAge;
	
	int earlyYears,laterYears,humanYears;

	earlyYears = 21;
	laterYears = (dogAge-2)*4;
	humanYears = earlyYears+laterYears;

	std::cout << "Hello! My name is " << dogName << " and I am " << humanYears << " years old in human years! Ruff Ruff!\n";

	return 0;

}
