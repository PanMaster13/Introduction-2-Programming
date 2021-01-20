/* FILE: Exploritary Task
 * Lab exercise 1
 * Author: Jason Ang 100087252
 * Last Modified 8/3/2018 10.49am
 */
 
#include <stdio.h>

int main()
{
	char name[20];
	int num_1;
	double num_2;
	double ans_1;
	double ans_2;
	double ans_3;

	printf("**Welcome to the number calculating and memory allocated checker program**");
	
	printf("\nHello user! What is your name?:");
	scanf("%s", &name);
	
	printf("\n**This is the calculating section**");
	printf("\nType in any 2 numbers to be calculated");
	
	printf("\nFirst number (integer):");
	scanf("%i", &num_1);
	
	printf("\nSecond number (floating point number):");
	scanf("%lf", &num_2);
	
	ans_1 = num_1 + num_2;
	
	ans_2 = num_1 - num_2;
	
	ans_3 = num_1 * num_2;
	
	printf("\n**Results**");
	printf("\n%i + %.2f = %.2f\n", num_1, num_2, ans_1);
	printf("\n%i - %.2f = %.2f\n", num_1, num_2, ans_2);
	printf("\n%i * %.2f = %.2f\n", num_1, num_2, ans_3);
	
	printf("\n**This is the memory allocated checker section**");
	printf("\nMemory allocated for your name is %d", sizeof(name));
	printf("\nMemory allocated for the first number is %d", sizeof(num_1));
	printf("\nMemory allocated for the second number is %d", sizeof(num_2));
	printf("\nMemory allocated for the first answer is %d", sizeof(ans_1));
	printf("\nMemory allocated for the second answer is %d", sizeof(ans_2));
	printf("\nMemory allocated for the third answer is %d", sizeof(ans_3));
	
	printf("\nThis is the end of the program. Thank you, %s, for your participation!", &name);
	
	return 0;
}

