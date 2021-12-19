
#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int main () {

	// This program will allow you to play "Rock, Paper, Scissors, Lizard, Spock" against your computer!
	// Live long and prosper!

	srand (time(NULL));

	int user ;
	int comp = rand() % 5 + 1;

	cout << "==================================\n";
	cout << "rock paper scissors lizzard spock!\n";
	cout << "==================================\n";

	cout << "Please choose an option by entering a number: " << endl;

	cout << " 1) Rock \n 2) Paper \n 3) Scissors \n 4) Lizzard \n 5) Spock \n\n";

	cin >> user;

	cout << "Rock, Paper, Scissor, Lizzard, Spock, SHOOT! \n";

	string userChoice;
	string compChoice;

	if (user == 1) {
		userChoice = " Rock ";
	} else if (user==2){
		userChoice = " Paper ";
	}else if (user==3){
		userChoice = " Scissors ";
	} else if (user == 4){
		userChoice = " Lizard ";
	}else {
		userChoice = " Spock ";
	}

	if (comp == 1) {
		compChoice = " Rock ";
	} else if (comp==2){
		compChoice = " Paper ";
	}else if (comp==3){
		compChoice = " Scissors ";
	} else if (comp == 4){
		compChoice = " Lizard ";
	}else {
		compChoice = " Spock ";
	}

	cout << "You throw" << userChoice << "and the cpu throws" << compChoice << "." << endl;

	if (user == 1) {
		if (comp == 1) {
			cout << "Draw! \n";
		} else if (comp == 3 || comp == 4) {
			cout << "You Win! \n";
		} else {
			cout << "You Lose! \n";
		}
	} else if (user == 2) {
		if (comp == 2) {
			cout << "Draw! \n";
		} else if (comp == 1 || comp == 5) {
			cout << "You Win! \n";
		}else {
			cout << "You Lose! \n";
		}
	} else if (user == 3) {
		if (comp == 3) {
			cout << "Draw! \n";
		} else if (comp == 2 || comp == 4) {
			cout << "You Win! \n";
		}else {
			cout << "You Lose! \n";
		}
	} else if (user == 4) {
		if (comp == 4) {
			cout << "Draw! \n";
		} else if (comp == 2 || comp == 5) {
			cout << "You Win! \n";
		}else {
			cout << "You Lose! \n";
		}
	} else if (user == 5) {
		if (comp == 5) {
			cout << "Draw! \n";
		} else if (comp == 1 || comp == 3) {
			cout << "You Win! \n";
		}else {
			cout << "You Lose! \n";
		}
	}

}
