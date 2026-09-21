#include <iostream>
#include <cmath>
#include <string>
#include <ctime>

//Welcome to the Number Guessing Game!
//I'm thinking of a number between 1 and 100.
//You have 5 chances to guess the correct number.
//Please select the difficulty level:
//1. Easy (10 chances)
//2. Medium (5 chances)
//3. Hard (3 chances)
//Enter your choice: 2
//Great! You have selected the Medium difficulty level.
//Let's start the game!
//Enter your guess: 50
//Incorrect! The number is less than 50.
//Enter your guess: 25
//Incorrect! The number is greater than 25.
//Enter your guess: 35
//Incorrect! The number is less than 35.
//Enter your guess: 30
//Congratulations! You guessed the correct number in 4 attempts.


void easy(int guess, int choice, int chances, int num);
void hard(int guess, int choice, int chances, int num);
void medium(int guess, int choice, int chances, int num);


int main(){

srand(time(0));
int num = rand() % 100 + 1;
int guess;
int chances;
int choice;

std::cout << "Welcome to the Number Guessing Game! \n";
std::cout << "I'm thinking of a number between 1 and 100. \n";
std::cout << "Please select the difficulty level: \n";
std::cout << "1.Easy (10 Chances) \n";
std::cout << "2.Medium (5 Chances) \n";
std::cout << "3.Hard (3 Chances) \n";
std::cout << "Choose 1,2,3 or 4 to Exit \n";
std::cin >> choice;

switch(choice){
	case 1: easy(guess, choice, chances, num);
	        break;
	case 2: medium(guess, choice, chances, num);
	        break;
	case 3: hard(guess, choice, chances, num);
			  break;
	default: std::cout << "Thank you for playing";
	        break;
}



return 0;
}

void easy(int guess, int choice, int chances, int num){

chances = 10;
std::cout << "Choose a number between 1 and 100, you have 10 guesses \n";
while(chances != 0 && guess != num){
	std::cin >> guess;
	if(guess == num){
	std::cout << "Congratulations, You won with " << chances << " attempts left \n";
	break;
	} else {
        if(guess < num){
            std::cout << "The number is higher \n";
        }else {
            std::cout << "The number is lower \n";
        }
	   chances -= 1;
	   std::cout << "Incorrect guess. You have " << chances << " guesses remaining. \n";
	  }
if(chances == 0){
    std::cout << "You are out of guesses. You fail.";
}
	
	
	
  }



}
void hard(int guess, int choice, int chances, int num){

chances = 3;
std::cout << "Choose a number between 1 and 100, you have 3 guesses \n";
while(chances != 0 && guess != num){
	std::cin >> guess;
	if(guess == num){
	std::cout << "Congratulations, You won with " << chances << " attempts left \n";
	break;
	} else {
        if(guess < num){
            std::cout << "The number is higher \n";
        }else {
            std::cout << "The number is lower \n";
        }
	   chances -= 1;
	   std::cout << "Incorrect guess. You have " << chances << " guesses remaining. \n";
	  }
if(chances == 0){
    std::cout << "You are out of guesses. You fail.";
}
	
	
	
  }

}
void medium(int guess, int choice, int chances, int num){

chances = 5;
std::cout << "Choose a number between 1 and 100, you have 5 guesses \n";
while(chances != 0 && guess != num){
	std::cin >> guess;
	if(guess == num){
	std::cout << "Congratulations, You won with " << chances << " attempts left \n";
	break;
	} else {
        if(guess < num){
            std::cout << "The number is higher \n";
        }else {
            std::cout << "The number is lower \n";
        }
	   chances -= 1;
	   std::cout << "Incorrect guess. You have " << chances << " guesses remaining. \n";
	  }
if(chances == 0){
    std::cout << "You are out of guesses. You fail.";
}
	
	
	
  }

}