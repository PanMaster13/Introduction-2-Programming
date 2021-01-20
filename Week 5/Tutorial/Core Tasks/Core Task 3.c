/* FILE: Lab5
 * Tic Tac Toe
 * Author: Jason Ang Chia Wuen
 * Last modified: 2/4/2018
 */
 
#include <stdio.h>

int main ()
{
	char array[3][3];
	int x;
	int y;
	
	char input;
	int position_x;
	int position_y;
	
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			array[x][y] = ' ';
			printf("| %c ", array[x][y]);
		}
		printf("|\n");
	}
	
	input = ' ';
	while (input != 'q')
	{
		printf("\nPress 'X' or 'O' to play, 'q' to quit.");
		fflush(stdin);
		scanf("%c", &input);
		
		if (input == 'q')
		{
			break;
		}
	
		printf("\nRow [1 - 3]:");
		scanf("%i", &position_x);
	
		printf("\nColumn [1 - 3]:");
		scanf("%i", &position_y);
	
		array[position_x - 1][position_y - 1] = input;
		
		for (x = 0; x < 3; x++)
		{
			for (y = 0; y < 3; y++)
			{
				printf("| %c ", array[x][y]);
			}
			printf("|\n");
		}
	}
	return 0;
}

