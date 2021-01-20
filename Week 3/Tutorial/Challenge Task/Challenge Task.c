/* FILE: Lab 3
 * Factoring if/else code
 * Author: Jason Ang Chia Wuen
 * Last Modified: 11:50 am 19/3/2018
 */
#include <stdio.h>

int main()
{
	int num;
	int x;
	int b = 0;
	int y = 0;
	
	printf("num =");
	scanf("%i", &num);
	
	if (num == 1)
	{
		x = 3;
	}
	else if (num == 2)
	{
		x = 6;
		y = y + 10;
	}
	else
	{
		x = 9;
	}
	
	b = b + x;
	printf("%i", num);
	return 0;
}

