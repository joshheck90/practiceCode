#include <iostream>
 
int main() {
 
  // The magic starts here
  int gryf =0;
  int huff = 0;
  int rave = 0;
  int slyth = 0;
  int ans1,ans2,ans3,ans4;

  std::cout << "The Sorting Hat Quiz! \n";
// Question 1
  std::cout << "Q1) When I'm dead I want people to rember me as: \n";
  std::cout << " 1) The Good \n 2) The Great \n 3) The Wise \n 4) The Bold \n";
  std::cin >> ans1;

  if (ans1 == 1){
    gryf++;
  } else if (ans1 == 2){
    huff++;
  } else if (ans1 == 3){
    rave++;
  } else if (ans1 == 4){
    slyth++;
  } else {std::cout << "Invalid Input. \n"; }

// Question 2  
  std::cout << "\nQ2) Dawn or Dusk: \n";
  std::cout << " 1) Dawn \n 2) Dusk \n";
  std::cin >> ans2;

  if (ans2 == 1){
    gryf++;
    rave++;
  } else if (ans2 == 2){
    huff++;
    slyth++;
  } else {std::cout << "Invalid Input. \n"; }

// Question 3
  std::cout << "Q3) Which instrument most pleases your ear: \n";
  std::cout << " 1) The Violin \n 2) The Trumpet \n 3) The Piano \n 4) The Drum \n";
  std::cin >> ans3;

  if (ans3 == 1){
    slyth++;
  } else if (ans3 == 2){
    huff++;
  } else if (ans3 == 3){
    rave++;
  } else if (ans3 == 4){
    gryf++;
  } else {std::cout << "Invalid Input. \n"; }

// Question 4
  std::cout << "Q4) Which road temps you the most: \n";
  std::cout << " 1) The wide, sunny, grassy lane \n 2) The narrow, dark, lantern-lit ally \n 3) The twisting, leaf-strewn path through the woods \n 4) The cobbled streed lined with ancient buildings \n";
  std::cin >> ans4;

  if (ans4 == 1){
    huff++;
  } else if (ans4 == 2){
    slyth++;
  } else if (ans4 == 3){
    gryf++;
  } else if (ans4 == 4){
    rave++;
  } else {std::cout << "Invalid Input. \n"; }

int max = 0;
std::string house;

if (gryf > max) {
 
  max = gryf;
  house = "Gryffindor";
 
}
 
if (huff > max) {
 
  max = huff;
  house = "Hufflepuff";
 
}
 
if (rave > max) {
 
  max = rave;
  house = "Ravenclaw";
 
}
 
if (slyth> max) {
 
  max = slyth;
  house = "Slytherin";
 
}
 
std::cout << house << "!\n";

}

