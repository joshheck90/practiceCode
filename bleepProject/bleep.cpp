#include <iostream>
#include <string>
#include "functions.hpp"

int main(){

	std::string word = "broccoli";
	std::string text = "I simply cannot stand broccoli. \nIt is a vile vegeteble, broccoli. \nI don't know why anyone would eat broccoli. \nAll broccoli should be fed to pigs to make more bacon.";

	bleep(word,text);


	std::cout << "New sanitized text: \n\n";
	std::cout << text;

}
