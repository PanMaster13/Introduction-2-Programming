/*FILE: Lab6Example1.c
* Example program will all code in the main function. 
* This program performs a number of operations and prints
* results using the same format and operations. 
* The student is to extract to repeated code, put it in a 
* function, set up any necessary parameters and call the function as necessary. 
* Author: James Hamlyn-Harris
* Last Modified: 22/07/2009 9:06pm. 
*
* Inputs: data entry from the keyboard (see prompts)
* Outputs: The user's status and score. 
*/ 

#include <stdio.h>

int main()
{
	int score = 0;
	char answer = ' ';
	
	printf("Welcome to the C brain scan\n");
	printf("\nI will ask you some questions... \nSelect the best answer and type in the corresponding letter.\n\n");
	
	
	printf("1. What does the == operator do? \n(a) calculates an arithmetic solution.\n(b) assigns a value to a variable.\n");
	printf("(c) checks for equality\n(d) draws the '=' character\n\n Your answer: ");
	
	do
	{
		scanf("%c", &answer);
	} while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd');
	
	if (answer == 'c')
	{
		score++;
		printf("\nCorrect \tYour score is now %i\n\n", score);
	}
	else
	{
		printf("\nWrong \tYour score is still %i\n\n", score);
	}
	
	
	printf("2. Which is NOT a C keyword? \n(a) when\n(b) const\n");
	printf("(c) unsigned\n(d) do\n\n Your answer: ");
	
	do
	{
		scanf("%c", &answer);
	} while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd');
	
	if (answer == 'a')	
	{
		score++;
		printf("\nCorrect \tYour score is now %i\n\n", score);
	}
	else
	{
		printf("\nWrong \tYour score is still %i\n\n", score);
	}

	
	printf("3. In function call, the actual parameters are separated by \n(a) semicolons\n(b) colons\n");
	printf("(c) commas\n(d) space\n\n Your answer: ");
	
	do
	{
		scanf("%c", &answer);
	} while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd');
	
	if (answer == 'c')	
	{
		score++;
		printf("\nCorrect \tYour score is now %i\n\n", score);
	}
	else
	{
		printf("\nWrong \tYour score is still %i\n\n", score);
	}


	printf("4. What is the keyword for a global variable? \n(a) global\n(b) namespace\n");
	printf("(c) external\n(d) there is no keyword. to be global the variable must be declared outside of main()\n\n Your answer: ");
	
	do
	{
		scanf("%c", &answer);
	} while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd');
	
	if (answer == 'd')
	{
		score++;
		printf("\nCorrect \tYour score is now %i\n\n", score);
	}
	else
	{
		printf("\nWrong \tYour score is still %i\n\n", score);
	}
	   
	printf("5. A function prototype always contains: \n(a) a void type\n(b) an integer parameter\n");
	printf("(c) a function name\n(d) a comma\n\n Your answer: ");
	
	do
	{
		scanf("%c", &answer);
	} while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd');
	
	if (answer == 'c')	
	{
		score++;
		printf("\nCorrect \tYour score is now %i\n\n", score);
	}
	else
	{
		printf("\nWrong \tYour score is still %i\n\n", score);
	}
	     

	
	printf("6. \"A function always has a return 0 statement\": \n(a) false\n(b) false for a closed function\n");
	printf("(c) true for a side-effect function\n(d) always true\n\n Your answer: ");
	
	do
	{
		scanf("%c", &answer);
	} while (answer != 'a' && answer != 'b' && answer != 'c' && answer != 'd');
	
	if (answer == 'a')
	{
		score++;
		printf("\nCorrect \tYour score is now %i\n\n", score);
	}
	else
	{
		printf("\nWrong \tYour score is still %i\n\n", score);
	}

	         	          
	return 0;
}	 
	

