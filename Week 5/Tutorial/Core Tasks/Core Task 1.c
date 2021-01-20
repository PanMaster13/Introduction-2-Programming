/* FILE: Lab5
 * One-Dimensional Array
 * Author: Jason Ang Chia Wuen
 * Last Modified: 31/3/2018
 */
 
#include <stdio.h>

int main ()
{
	int array[20];
	int counter;
	int minus = 0;
	int change;
	int new_num;
	int sum = 0;
	double average;
	int highest;
	
	highest = 20;
	
	for(counter = 19; counter >= 0; counter--)
	{
		array[counter] = 20 - minus;
		sum = sum + array[counter];
		printf("\n%i", array[counter]);
		minus++;
	}
	
	printf("\nWhich number would you like to change? Please select its position [0 - 19]:");
	scanf("%i", &change);
	
	printf("\nWhat will the new number be?:");
	scanf("%i", &new_num);
	
	if (new_num > highest)
	{
		highest = new_num;
	}
	
	sum = (sum - array[change]) + new_num;
	
	array[change] = new_num;
	
	average = sum / 20;
	
	printf("\nAverage value: %.2f", average);
	
	printf("\nHighest value: %i", highest);
	
	return 0;
}

