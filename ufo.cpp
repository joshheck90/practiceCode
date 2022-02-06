#include <iostream>
#include "ufo_functions.hpp"

int main() {

greet();

std::string codeword = "codecademy";
std::string answer = "__________";
int misses = 0;
std::vector<char> incorrect;
bool guess = false; 
char letter;

while ( misses < 7 && answer != codeword ){

  display_misses(misses);
  display_status(incorrect,answer);
  
  std::cout << "Please Enter Your Guess: ";
  std::cin >> letter;
  std::cout << "\n";

  for (int i=0; i<codeword.length();i++){
    if (letter == codeword[i]){
      guess = true;
      answer[i] = letter;
    }
  }

  if (guess){
    std::cout << "Correct!\n";
  } else {
    std::cout << "Incorrect! The tractor bea, pulls the person in further.\n";
    misses++;
    incorrect.push_back(letter);
  }

  guess = false;
  
}

end_game(answer,codeword);

}

