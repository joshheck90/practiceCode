#include <iostream>
#include <string>


void sensor(int startIndex,int length,std::string &text){
	for (int i = startIndex; i<(startIndex + length); i++){
	    text[i] = '*';
	  }
}

void bleep(std::string const &wordToBleep, std::string &textToSensor){

	std::cout << "We will be removing the forbidden word \"" << wordToBleep << "\" from the following text: " << "\n\n";

	std::cout << textToSensor << "\n\n";

	int wordLength = wordToBleep.length();
	int textLength = textToSensor.length();

	int i = wordLength-1;
	int forbiddenWordCount = 0;

	while (i<textLength){

		if (wordToBleep == textToSensor.substr(i,wordLength)){
			forbiddenWordCount++;
			sensor(i,wordLength,textToSensor);
			i = i + wordLength;
		} else {
			i++;
		}
	}

	std::cout << "Found " << forbiddenWordCount << " occurrences of the forbidden word!\n\n";

}



