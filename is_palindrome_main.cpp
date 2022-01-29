#include <iostream>
#include <vector>
#include "is_palindrome.hpp"

int main(int argc, char* argv[]) {
  
for (int i=1; i<argc; i++){
  if (is_palindrome(argv[i]) ){
    std::cout << argv[i] << " is a palindrome!" << "\n\n";
  } else {
    std::cout << argv[i] << " is not a palindrome." << "\n\n";
  }
}
  return 0;
}
