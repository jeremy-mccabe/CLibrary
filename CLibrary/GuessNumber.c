// Randomly generate numbers between 1 and 1000 for user to guess.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessGame(void); // function prototype
int isCorrect(int, int); // function prototype

//int main(void)
//{
//	// srand( time( 0 ) ); // seed random number generator
//	guessGame();
//} // end main

  // guessGame generates numbers between 1 and 1000
  // and checks user's guess
void guessGame(void)
{
	int answer; // randomly generated number
	int guess; // user's guess
	char response; // 'y' or 'n' response to continue game

				   // loop until user types 'n' to quit game
	do {
		// generate random number between 1 and 1000
		// 1 is shift, 1000 is scaling factor
		answer = 1 + rand() % 1000;

		// prompt for guess
		puts("I have a number between 1 and 1000.\n"
			"Can you guess my number?\n"
			"Please type your first guess.");
		printf("%s", "? ");
		scanf_s("%d", &guess);

		// loop until correct number
		while (!isCorrect(guess, answer))
			scanf_s("%d", &guess);

		// prompt for another game
		puts("\nExcellent! You guessed the number!\n"
			"Would you like to play again?");
		printf("%s", "Please type ( 1=yes, 2=no )? ");
		scanf_s("%d", &response);

		puts("");
	} while (response == 'y');
} // end function guessGame

  // isCorrect returns true if g equals a
  // if g does not equal a, displays hint
int isCorrect(int g, int a)
{
	// guess is correct
	if (g == a)
		return 1;

	// guess is incorrect; display hint
	if (g < a)
		printf("%s", "Too low. Try again.\n? ");
	else
		printf("%s", "Too high. Try again.\n? ");

	return 0;
} // end function isCorrect