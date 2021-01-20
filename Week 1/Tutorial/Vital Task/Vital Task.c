/* FILE: Arithmetic calculator
 * Lab exercise 1
 * Author: Jason Ang 100087252
 * Last Modified 6/3/2018 5.17pm
 */
 
#include <stdio.h>

int main()
{
	int num_1;
	
	double num_2;
	
	double ans_1;
	double ans_2;
	double ans_3;
	
	printf("**This is a simple arithmetic calculator.**\n");
	
	printf("Please enter an integer:");
	
	scanf("%i", &num_1);
	
	printf("Please enter a floating-point number:");
	
	scanf("%lf", &num_2);
	
	ans_1 = num_1 + num_2;
	
	ans_2 = num_1 - num_2;
	
	ans_3 = num_1 * num_2;
	
	printf("Output:\n");
	printf("%i + %.2f = %.2f\n", num_1, num_2, ans_1);
	printf("%i + %.2f = %.2f\n", num_1, num_2, ans_2);
	printf("%i + %.2f = %.2f\n", num_1, num_2, ans_3);

	return 0;
}

