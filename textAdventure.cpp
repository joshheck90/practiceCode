/*
 * textAdventure.cpp
 *
 *  Created on: Jan 10, 2022
 *      Author: joshh
 */
#include <iostream>

int main(){

	std::cout << "\n";
	std::cout << "You are in a dire situation, hounded by Humperdink's men, and you have found yourself at the edge of the Fire Swamp. \n";
	std::cout << "You must make a decision: \n";
	std::cout << "A) You don't dare enter the FIRE SWAMP. You'll face Humperdink's men. \n";
	std::cout << "B) You'll brave the danger of the FIRE SWAMP! They won't dare follow you in! \n";
	std::cout << "\n";
	char input1;

	for (int i=0;i<5 && input1 != 'A' && input1 != 'B';i++) {
		std::cin >> input1;
	}

	switch (input1) {
	case 'A':
		std::cout << "\n";
		std::cout << "You have chosen to face Humperdink's Men! \n";
		std::cout << "A brave, but foolish choice, as they out number you 20 to 1, and they have cross bows. \n";
		std::cout << "You draw your sword, and they immediately turn you into a pin cushion full of quarrels. \n ";
		std::cout << "At least you died quickly. THE END \n";
		std::cout << "\n";
		return 0;
	case 'B':
		std::cout << "\n";
		std::cout << "You dash into the fire swap, and the pursuing men at arms pull up short at the tree line. \n";
		std::cout << "Confident that you will die a horrible death, the pursuing force leaves you to the swamp. \n";
		std::cout << "You have traded one peril for another! \n";
		std::cout << "\n";
		break;
	default:
		std::cout << "\n";
		std::cout << "Your input option is invalid. TERMINATING. \n";
		std::cout << "\n";
		return 0;
	}
	std::cout << "\n";
	std::cout << "You must now traverse the Fire Swap alone! \n ";
	std::cout << "The path splits into three branches. Choose your route! \n";
	std::cout << "1) The left branch is a dry, sandy track that quickly twists and is lost to view. \n";
	std::cout << "2) The middle path is covered with vines, and... are those tufts of hair? \n";
	std::cout << "3) The right branch is a narrow trace into thick trees and you hear a pop-ling sound in the distance. \n";
	std::cout << "\n";

	int input2;
	char input3;
	int input4;
	std::cin >> input2;

	if(input2 == 1){
		std::cout << "\n";
		std::cout << "No sooner have you stepped onto the sandy surface of the left branch, then you are swallowed up in the treacherous LIGHTNING SAND! \n";
		std::cout << "If you had a companion with a rope, you might be saved! But alas, you are traveling alone. \n";
		std::cout << "You slowly suffocate, sand and agony filling your lungs, your heart beating ever faster as the oxegen levels of your blood drop. \n";
		std::cout << "You desperately try to scream for help, but but even if you could scream with lungs full of dry sand, who would hear you? \n";
		std::cout << "You died. That was pretty horrible. THE END \n";
		std::cout << "\n";
		return 0;
	} else if (input2 == 2) {
		std::cout << "\n";
		std::cout << "As you are hacking your way through the vines of the center path, you come to a slight clearing, and find a beast blocking your path. \n";
		std::cout << "It has the appearance of a large rat, though with rather plush looking fur, and adorable tiny ears, over it's gaping maw full of yellow teeth. \n";
		std::cout << "Do you: \n A) Lay your sword to the side so as not to frighten the poor thing, and reach out to fondle it's tiny ears. \n B) Strike it immediately with your sword, so convenienly already in your hand. \n";
		std::cin >> input3;
		std::cout << "\n";
	} else if (input2 == 3){
		std::cout << "\n";
		std::cout << "As you make your way along the right branch of the path, you notice the popling sound louden just in front of you. You pause for the space of a breath and decide... \n";
		std::cout << "1) You had better wait a minute and see if you can figure out what is causing that noise. \n";
		std::cout << "2) It's just a sound, and this creepy forest swap place is full of sounds. You continue forward immediately. \n";
		std::cin >> input4;
		std::cout << "\n";
	} else { std::cout << "You did not enter a valid number! THE END \n"; return 0;}


	if (input3=='A' || input3 == 'B'){
		switch (input3){
		case 'A':
			std::cout << "\n";
			std::cout << "The Rodent Of Unusual Size lunges forward with incredible speed and rips out your throat! \n";
			std::cout << "Gurgling blood, you fall to the ground and three more ROUS's rush from the underbrush to feast on your still living flesh. \n";
			std::cout << "Within seconds they have torn you limb from limb, but thankfully, you only felt the first few moments before you lost consciousness and slip into oblivion. \n";
			std::cout << "You are Dead. There was so much gore. THE END. \n";
			std::cout << "\n";
			break;
		case 'B':

			std::cout << "\n";std::cout << "You strike the head off the Rodent Of Unusual Size with a single sweep of your blade! \n";
			std::cout << "The scent of fresh blood draws three more beasts from the underbrush, but they are distracted by the corpse of their fallen kin, feasting upon it's flesh. \n";
			std::cout << "You make your escape with all haste, and burst forth from the Fire Swamp VICTORIOUS!\n";
			std::cout << "Hey! You didn't die! Nice. THE END \n";
			std::cout << "\n";
			break;
		default:
			std::cout << "Your mother was a hamster, and your father smelt of elderberries! \n";
		}
	}else if (input4 == 1 || input4 ==2){
		switch (input4){
		case 1:
			std::cout << "\n";
			std::cout << "After a mere 2 or 3 seconds of waiting, a column of flame bursts forth from the ground before you! \n";
			std::cout << "The legendary Flame Spurt of the Fire Swamp! (That's why it's called the Fire Swamp, after all.) \n";
			std::cout << "Relieved that you now know how to avoid the Flame Spurt, you carefully traverse the remainder of the path, listening intently, until you emerge, only mildly singed, into the sunlight! \n";
			std::cout << "Well look at that! You're alive! Nifty. THE END \n";
			std::cout << "\n";
			break;
		case 2:
			std::cout << "\n";
			std::cout << "You take two steps forward and are suddenly engulfed in a pillar of scorching heat. \n";
			std::cout << "The fabled Flame Spurt of the Fire Swamp (That is why it's called the Fire Swamp, after all) burns the hair from you body, roasts your flesh, and sets your clothing alight. \n";
			std::cout << "You writhe on the ground in agony, the intense heat shriveling your flesh. Soon naught but your charred and brittle bones remain.\n";
			std::cout << "You are dead. What a gruesome way to go. THE END \n";
			std::cout << "\n";
			break;
		default:
			std::cout << "Your mother was a hamster, and your father smelt of elderberries! \n";
		}
	}else  {std::cout << "No valid entries given! THE END \n"; return 0;}

	return 0;
}
