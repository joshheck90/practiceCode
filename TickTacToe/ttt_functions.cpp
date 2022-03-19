/*
 * ttt_functions.cpp
 *
 *  Created on: Mar 18, 2022
 *      Author: joshh
 */

#include <iostream>
#include <vector>
using namespace std;

int turnCount;
int currentPlayer;
char boardNumbering [] = {'1','2','3','4','5','6','7','8','9'};
char board []  = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
std::vector<int> playedNumbers;

void drawBoard(char board[]) {

    cout << "     |     |      \n";

    cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";

    std::cout << "\n";
}

void setUpGame(){

    turnCount = 1;
    currentPlayer = 1;

    for (int i=0; i<9; i++){
    	board[i]  = ' ';
    }

    while (playedNumbers.size()>0){
    	playedNumbers.pop_back();
    }

    std::cout << "***Ready to play!***\n";

    std::cout << "\n Current Game Board: \n";
	drawBoard(board);

}

void placeMarkOnBoard(int playPosition,char playerChar){

	bool alreadyPlayed = false;
	for (int i=0;i<playedNumbers.size();i++){
		if (playedNumbers[i] == playPosition){
			alreadyPlayed = true;
		}
	}

	if (alreadyPlayed){
			std::cout << "That space is already taken! Try again...";
			turnCount--;
	} else if ((1>playPosition) || (playPosition>10)){
		std::cout << "You did not enter a valid space position! Try again...";
		turnCount--;
	} else {

	board[playPosition-1] = playerChar;
	playedNumbers.push_back(playPosition);

	}
}

std::vector<int> getElementIndicies(char element){

	std::vector<int> indicies;

	for (int i=0; i<9; i++){
		if (board[i] == element){
			indicies.push_back(i);
		}
	}

	return indicies;
}

bool contains(std::vector<int> vec, int elem){

	for (int i=0; i<vec.size(); i++){
		if (vec[i]==elem){
			return true;
		}
	}
	return false;
}

bool containsWinningPattern(int pattern[], std::vector<int> indicies){

	int val1 = pattern[0];
	int val2 = pattern[1];
	int val3 = pattern[2];

	if (contains(indicies,val1) && contains(indicies,val2) && contains(indicies,val3)){
		return true;
	}

	return false;
}

bool checkForWinningPattern(std::vector<int> indicies){

	int winningPatterns[][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};

	for (int i = 0; i<8; i++){
		if (containsWinningPattern(winningPatterns[i],indicies)){
			return true;
		}
	}

	return false;
}

void checkForWinner(char playerChar){

	if (turnCount > 4){

		std::vector<int> indicies = getElementIndicies(playerChar);

		if (indicies.size() > 2){

			if (checkForWinningPattern(indicies)){

				std::cout << "***Player Number " << currentPlayer << " Wins the Game!*** \n\n";
				turnCount = 10;

			}
		}
	}
}

void playTickTackToe(){

	char playerChar;
	int playPosition;

	while (turnCount < 10){

		currentPlayer = turnCount%2;

		if (currentPlayer == 1){
			playerChar = 'x';
		}
		else {
			playerChar = 'o';
			currentPlayer = 2;
		}

		std::cout << "\n Tick Tack Tow Board Space Numbers: \n";
		drawBoard(boardNumbering);

		std::cout << "Player " << currentPlayer << " turn! Your Mark is: " << playerChar << "\n";
		std::cout << "Enter the space number you would like to play: ";

		std::cin >> playPosition;

		placeMarkOnBoard(playPosition,playerChar);

		std::cout << "\n Current Game Board: \n";
		drawBoard(board);

		checkForWinner(playerChar);

		turnCount++;
	}
}
