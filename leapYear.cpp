#include <iostream>
using namespace std;

int main() {

int year;

cout << "Enter a year as a 4 didget integer: ";
cin >> year;

if (year >= 1000 && year <= 9999) {

	if ((year % 4) == 0){

		cout << "Divisible by 4, so looking likely. Checking for divisibility by 100... \n";
		
	if (year % 100 == 0) {

		cout << "Uhoh. Divisible by 100. Looking shaky again. Checking for divisibilty by 400, as your last hope... \n";

	if (year % 400 == 0){
        
		cout << "Divisible by 400! The rarest form of leap year, you lucky little piglet you! \n";
      
	} else {
        
		cout << "Not divisible by 400. Bummer dude. This is not a leap year.\n";
	}
	} else {

		cout << "Not divisible by 100. \nCongratulations, you picked a regular leap year. \n";
	}
  	} else {
    		cout << "This is not a leap year. \n";
  	}

	} else {
    		cout << "You did not enter a valid number!";
	}
}
