#include <string>

bool is_palindrome(std::string text){
  std::string reverseText;
  for (int i = text.length()-1; i>=0; i--){
    reverseText = reverseText + text[i];
  }
  if (text == reverseText){
    return true;
  } else {
    return false;
  }
}
