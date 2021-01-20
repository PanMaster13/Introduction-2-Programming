/* FILE: Lab06
 * Parameter and Return Value
 * Author: Jason Ang Chia Wuen
 * Last Modified: 16/3/2018 10:49am
 */
 
#include <stdio.h>

int main()
{
	int ans;
	int counter;
	int x = 2;
	int y = 1;
	
	int input_1;
	int input_2;
	
	for (counter = 0; counter < 5; counter++)
	{
		ans = mypower (x, y);
		printf("\nResult of %i to the power of %i is %i", x, y, ans);
		y++;
	}
	
	printf("\nEnter base value:");
	scanf("%i", &input_1);
	
	printf("Enter power value:");
	scanf("%i", &input_2);
	
	ans = mypower (input_1, input_2);
	printf("\nResult of %i to the power of %i is %i", input_1, input_2, ans);

	
	return 0;
}

int mypower(int x, int y)
{
	int ans;
	int counter;
	
	ans = x;
	
	for (counter = 1; counter < y; counter++)
	{
		ans = ans * x;
	}
	
	return ans;
}

