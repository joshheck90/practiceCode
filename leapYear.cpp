#include <iostream>
using namespace std;

int main() {

int year;

cout << "Enter a year as a 4 didget integer: ";
cin >> year;

if (year >= 1000 && year <= 9999) {

	if ((year % 4)==0){

		cout << "Divisible by 4, so looking likely. Checking for divisibility by 100 and 400... \n";
		
		if ( (year % 100 == 0) && !(year % 400 == 0)) {
			
			cout << "Uhoh. Divisible by 100, but not by 400... \n";
			cout << "Bummer dude. This is not a leap year.\n";
		} else {
			cout << "Congratulations. You chose a leap year! \n";
		}
	
	} else {
    		cout << "This is not a leap year. \n";
  	}

} else {
	cout << "You did not enter a valid number! \n";
}

}
