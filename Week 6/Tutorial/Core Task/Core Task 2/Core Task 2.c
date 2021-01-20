/* FILE: Lab06
 * Passing of array as argument to a function
 * Author: Jason Ang Chia Wuen
 * Last Modified: 16/4/2018
 */

int find_Total(int array[])
{
	int x;
	int sum = 0;
	
	for (x = 0; x < 12; x++)
	{
		sum = sum + array[x];
	}
	
	return sum;
}

int find_Highest(int array[])
{
	int x;
	int highest;
	
	highest = array[0];
	
	for (x = 0; x < 12; x++)
	{
		if (array[x] > highest)
		{
			highest = array[x];
		}
	}
	
	return highest;
}

int main()
{
	int array[12];
	int input;
	int counter;
	int sum;
	int highest;
	
	for (counter = 0; counter < 12; counter++)
	{
		printf("Score of player %i:", counter+1);
		scanf("%i", &input);
		
		array[counter] = input;
	}
	
	sum = find_Total(array);
	printf("\nSum of scores: %i", sum);
	
	highest = find_Highest(array);
	printf("\nHighest score: %i", highest);
	
	return 0;
}

