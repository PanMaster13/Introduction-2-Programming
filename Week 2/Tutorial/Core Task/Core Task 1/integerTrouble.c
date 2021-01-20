/* FILE: integerTrouble
* Illustrates integer division and truncation errors
* Author: Sim
* Last Modified: 14/03/2016 9:00am
*/
#include <stdio.h>

int main()
{
	int a = 5;
	int b = 7;
	int c = 2;
	int d = 3;
	double x = 2.5;
	double y = 5.0;
	
	printf("integer division errors\n");
	printf("5 / 7 = %.2f\n", (double)a / b);
	printf("2 / 7 = %.2f\n", (double)c / b);
	printf("3 / 2 = %.2f\n", (double)d / c);
	printf("7 / 2 = %.2f\n", (double)b / c);
	
	printf("mixed type division\n");
	printf("5 / 2.5 = %.2f\n", a / x);
	
	printf("casting to doubles\n");
	printf("5 / 7 = %.2f\n", (double)a / b);	
	 
	return 0;
}

