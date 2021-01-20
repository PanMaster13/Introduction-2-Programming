/* FILE: Lab5
 * Two-Dimensional Array
 * Author: Jason Ang Chia Wuen
 * Last modified: 2/4/2018
 */
 
#include <stdio.h>

int main ()
{
	char array[5][5];
	char alpha;
	int a;
	int b;
	int x;
	int y;
	
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			printf("\nWord no.%i, letter no.%i:", a + 1, b + 1);
			scanf("%c", &alpha);
			fflush(stdin);
			array[a][b] = alpha;
		}
	}
	
	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 5; y++)
		{
			printf("%c", array[x][y]);
		}
		printf("\n");
	}

	return 0;
}

