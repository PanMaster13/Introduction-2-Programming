/* FILE: Core Task 2
 * Pointer (pass by reference)
 * Author: Jason Ang Chia Wuen
 * Last Modified : 23/4/2018
 */

#include <stdio.h>

void input(int ar[], int npts)
{
	int counter;
	
	for(counter = 0; counter < npts; counter++)
	{
		printf("Input integer:");
		scanf("%i", &ar[counter]);
	}
}

float calculate(int ar[], int npts, int *gtr)
{
	int sum=0, counter;
	float avg;
	
	for (counter = 0; counter < npts; counter++)
	{
		sum = sum + ar[counter];
	}
	
	avg = sum / npts;
	
	for (counter = 0; counter < npts; counter++)
	{
		if (ar[counter] > (int)avg)
		{
			(*gtr)++;
		}
	}
	
	return avg;
}

int main()
{

	int array[4];
	float avg;
	
	int gtr = 0;
	input(array, 4);
	
	avg = calculate(array, 4, &gtr);
	
	printf("\nAverage: %.2f", avg);
	printf("\nIntegers more than average: %i", gtr);
	
	return 0;
}

