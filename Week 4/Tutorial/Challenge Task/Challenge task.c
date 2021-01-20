/* FILE: Lab 4
 * Fibonacci Series and Prime Number
 * Author: Jason Ang Chia Wuen
 * Last Modified: 27/3/2018 4:10pm
 */
 
#include <stdio.h>

int main()
{
	int terms;
	int counter_1; /* For generating Fibonacci Series */
	int a=0;
	int b=1;
	int c;
	int counter_2; /* For detecting prime number */
	int x; /* Determines whether a number is a prime number or not */
	
	
	printf("Please enter the number of terms:");
	scanf("%i", &terms);
	
	printf("Among the first %i terms of Fibonacci series that are also prime numbers:", terms);
	
	for (counter_1 = 1; counter_1 < terms; counter_1++)
	{
		c = a + b;
		a = b;
		b = c;
		x = 0;
		
		for (counter_2 = 1; counter_2 <= c; counter_2++)
  		{
  			if (c % counter_2 == 0)
			{
        		 x++;
  			}
  		}
		if (x == 2)
		{
 			printf("\n%i", c);
  		}
	}
	
	
	return 0;
}

