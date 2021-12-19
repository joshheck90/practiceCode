#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
  // your future is here!

  int answer;
  cout << "MAGIC 8-BALL: \n";

  srand(time(NULL));
  answer = rand()%10;

  if (answer == 0){
    cout << "It Is Certain! \n";
  } else if (answer == 1) {
    cout << "Most Likely. \n";
  } else if (answer == 2) {
    cout << "Better than average. \n";
  } else if (answer == 3) {
    cout << "Your odds are 50/50. \n";
  } else if (answer == 4) {
    cout << "There is decent chance. \n";
  } else if (answer == 5) {
    cout << "One out of three ain't bad right? \n";
  } else if (answer == 6) {
    cout << "The margin is very small. \n";
  } else if (answer == 7) {
    cout << "Your outlook is not great. \n";
  } else if (answer == 8) {
    cout << "Very doubtfull. \n";
  } else {
    cout << "Not a chance. \n";
  }

}
