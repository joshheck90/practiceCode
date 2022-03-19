/*
 * ttt.cpp
 *
 *  Created on: Mar 18, 2022
 *      Author: joshh
 */

#include <iostream>
#include <vector>
using namespace std;

#include "ttt_functions.hpp"


int main(){

    char playAgain = 'y';

    while (playAgain == 'y'){

    	setUpGame();
    	playTickTackToe();

    	std::cout << "Would you like to play again? \n";
    	std::cout << "Input \"y\" for yes and \"n\" for no: ";
    	std::cin >> playAgain;
		std::cout << "\n";

    }
    std::cout << "***Thanks for Playing Tick-Tack-Toe!***\n";
}


