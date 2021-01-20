/* FILE: Lab5
 * Turtle Graphics
 * Author: Jason Ang Chia Wuen
 * Last modified: 2/4/2018
 */
 
#include <stdio.h>

int main ()
{
	int array[5][5];
	int x;
	int y;
	int head_x = 2;
	int head_y = 2;
	
	int position_x;
	int position_y;
	
	char input;
	char d = 'd';

	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 5; y++)
		{
			if ((x == 2) && (y == 2))
			{
				array[x][y] = 1;
			}
			else
			{
				array[x][y] = 0;
			}
			printf("| %i ", array[x][y]);
		}
		printf("|\n");
	}
	
	while (d == 'd')
	{
		printf("\nPress 'w' to go up, 's' to go down, 'a' to go left, 'd' to go right or 'q' to quit:");
		fflush(stdin);
		scanf(" %c", &input);
	
		if (input == 'a')
		{
			head_y = head_y - 1;
		}
	
		else if (input == 'd')
		{
			head_y = head_y + 1;
		}
	
		else if (input == 'w')
		{
			head_x = head_x - 1;
		}
	
		else if (input == 's')
		{
			head_x = head_x + 1;
		}
		
		else if (input == 'q')
		{
			break;
		}
		
		else
		{
			printf("Wrong input, please try again.");
			continue;
		}
	
		for (x = 0; x < 5; x++)
		{
			for (y = 0; y < 5; y++)
			{
				if ((x == head_x) && (y == head_y))
				{
					array[x][y] = 1;
				}
				printf("| %i ", array[x][y]);
			}
			printf("|\n");
		}
		printf("\n");
	}
	return 0;
}

