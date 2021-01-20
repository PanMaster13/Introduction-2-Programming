/* FILE: Lab 3
 * Displaying four integers in ascending and descending order
 * Author: Jason Ang Chia Wuen
 * Last Modified: 18/3/2018 12:04pm
 */

#include <stdio.h>

int main()
{
	int num_1;
	int num_2;
	int num_3;
	int num_4;
	
	int first;
	int second;
	int third;
	int fourth;
	
	printf("Enter first integer:");
	scanf("%i", &num_1);
	printf("Enter second integer:");
	scanf("%i", &num_2);
	printf("Enter third integer:");
	scanf("%i", &num_3);
	printf("Enter fourth integer:");
	scanf("%i", &num_4);
	
	/* Cases for num_1 is highest*/
	
	if ((num_1 > num_2) && (num_2 > num_3) && (num_3 > num_4))
	{
		first = num_1;
		second = num_2;
		third = num_3;
		fourth = num_4;
	}
	
	else if ((num_1 > num_2) && (num_2 > num_4) && (num_4 > num_3))
	{
		first = num_1;
		second = num_2;
		third = num_4;
		fourth = num_3;
	}
	
	else if ((num_1 > num_3) && (num_3 > num_4) && (num_4 > num_2))
	{
		first = num_1;
		second = num_3;
		third = num_4;
		fourth = num_2;
	}
	
	else if ((num_1 > num_4) && (num_4 > num_3) && (num_3 > num_2))
	{
		first = num_1;
		second = num_4;
		third = num_3;
		fourth = num_2;
	}
	
	else if ((num_1 > num_3) && (num_3 > num_2) && (num_2 > num_4))
	{
		first = num_1;
		second = num_3;
		third = num_2;
		fourth = num_4;
	}
	
	else if ((num_1 > num_4) && (num_4 > num_2) && (num_2 > num_3))
	{
		first = num_1;
		second = num_4;
		third = num_2;
		fourth = num_3;
	}
	
	/* Cases for num_2 is highest */
	
	else if ((num_2 > num_1) && (num_1 > num_3) && (num_3 > num_4))
	{
		first = num_2;
		second = num_1;
		third = num_3;
		fourth = num_4;
	}
	
	else if ((num_2 > num_1) && (num_1 > num_4) && (num_4 > num_3))
	{
		first = num_2;
		second = num_1;
		third = num_4;
		fourth = num_3;
	}
	
	else if ((num_2 > num_3) && (num_3 > num_4) && (num_4 > num_1))
	{
		first = num_2;
		second = num_3;
		third = num_4;
		fourth = num_1;
	}
	
	else if ((num_2 > num_4) && (num_4 > num_3) && (num_3 > num_1))
	{
		first = num_2;
		second = num_4;
		third = num_3;
		fourth = num_1;
	}
	
	else if ((num_2 > num_3) && (num_3 > num_1) && (num_1 > num_4))
	{
		first = num_2;
		second = num_3;
		third = num_1;
		fourth = num_4;
	}
	
	else if ((num_2 > num_4) && (num_4 > num_1) && (num_1 > num_3))
	{
		first = num_2;
		second = num_4;
		third = num_1;
		fourth = num_3;
	}
	
	/* Cases for num_3 is highest */
	
	else if ((num_3 > num_2) && (num_2 > num_1) && (num_1 > num_4))
	{
		first = num_3;
		second = num_2;
		third = num_1;
		fourth = num_4;
	}
	
	else if ((num_3 > num_2) && (num_2 > num_4) && (num_4 > num_1))
	{
		first = num_3;
		second = num_2;
		third = num_4;
		fourth = num_1;
	}
	
	else if ((num_3 > num_1) && (num_1 > num_4) && (num_4 > num_2))
	{
		first = num_3;
		second = num_1;
		third = num_4;
		fourth = num_2;
	}
	
	else if ((num_3 > num_4) && (num_4 > num_1) && (num_1 > num_2))
	{
		first = num_3;
		second = num_4;
		third = num_1;
		fourth = num_2;
	}
	
	else if ((num_3 > num_1) && (num_1 > num_2) && (num_2 > num_4))
	{
		first = num_3;
		second = num_1;
		third = num_2;
		fourth = num_4;
	}
	
	else if ((num_3 > num_4) && (num_4 > num_2) && (num_2 > num_1))
	{
		first = num_3;
		second = num_4;
		third = num_2;
		fourth = num_1;
	}
	
	/* Cases for num_4 is highest */
	
	else if ((num_4 > num_2) && (num_2 > num_3) && (num_3 > num_1))
	{
		first = num_4;
		second = num_2;
		third = num_3;
		fourth = num_1;
	}
	
	else if ((num_4 > num_2) && (num_2 > num_1) && (num_1 > num_3))
	{
		first = num_4;
		second = num_2;
		third = num_1;
		fourth = num_3;
	}
	
	else if ((num_4 > num_3) && (num_3 > num_1) && (num_1 > num_2))
	{
		first = num_4;
		second = num_3;
		third = num_1;
		fourth = num_2;
	}
	
	else if ((num_4 > num_1) && (num_1 > num_3) && (num_3 > num_2))
	{
		first = num_4;
		second = num_1;
		third = num_3;
		fourth = num_2;
	}
	
	else if ((num_4 > num_3) && (num_3 > num_2) && (num_2 > num_1))
	{
		first = num_4;
		second = num_3;
		third = num_2;
		fourth = num_1;
	}
	
	else if ((num_4 > num_1) && (num_1 > num_2) && (num_2 > num_3))
	{
		first = num_4;
		second = num_1;
		third = num_2;
		fourth = num_3;
	}
	
	else
		printf("Please input again.");
		
	printf("Ascending order: %i, %i, %i, %i", fourth, third, second, first);
	printf("\nDescending order: %i, %i, %i, %i", first, second, third, fourth);
	
	return 0;
}

