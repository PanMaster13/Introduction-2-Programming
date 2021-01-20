/* FILE: Lab 3
 * Nested If Else Structure
 * Author: Jason Ang Chia Wuen
 * Last Modified: 20/3/2018 3:56pm
 */
 
#include <stdio.h>

int main()
{
	int temp;
	char power;
	
	int lowest = 38;
	
	printf("Temperature:");
	scanf("%i", &temp);
	
	if (temp < lowest)
		lowest = temp;
	
	printf("Status of backup power (Y/N):");
	fflush(stdin);
	scanf("%c", &power);
	
	if (temp < 50)
		printf("Normal mode of operation");
		
	else if ((temp >= 50) && (temp < 80))
		printf("Turn on circulating fan");
		
	else if ((temp >= 80) && (power == 'N'))
	{
		printf("Turn equipment off immediately");
		printf("\nLowest temperature: %i", lowest);
	}
	
	else
		printf("Incorrect input.");
	
	return 0;
}

