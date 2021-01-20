/* FILE: Lab 4
 * Guess Number
 * Author: Jason Ang Chia Wuen
 * Last Modified: 25.3.2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int rand_x;
	int input;
	int d = 0; /* To initialise loop */
	
	/* Section of generating random number */
	srand( (unsigned) time(NULL)); /* To ensure that the random number does not stay the same */
	rand_x = rand()%101; /* Generates number within the range of 0 to 100 (101 is the limit) */
	
	/*Section of guessing random number */
	while (d < 1)
	{
		printf("\nGuess the random number between 0 to 100:");
		scanf("%i", &input);
	
		if (input > rand_x)
			printf("The guessed number is larger than the random number.");
		
		else if (input < rand_x)
			printf("The guessed number is lesser than the random number.");
		
		else
		{
			printf("Congratulations! You've guessed it right! The random number is indeed %i.", rand_x);
			break;
		}
	}
		
	return 0;
}

