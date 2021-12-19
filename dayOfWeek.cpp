#include <iostream>
using namespace std;

int main() {
  
  int day;
  cout << "Enter a number for day of the week, starting with Monday as day 1: ";
	  cin >> day;
  
  // Write the code below:
  if (day == 6 || day == 7) {
    cout << "Weekend, Baby! " << endl;
  } else if (day < 6 and day > 0) {
    cout << "Work, Work, Work." << endl;
  } else {
    cout << "That's not a valid number for \"Day In Week\" \n";
  }

}
