int main()
{
	int array[20];
	int counter;
	int plus = 1;

	for(counter = 0; counter <= 19; counter++)
	{
		array[counter] = plus;
		printf("\n%i", array[counter]);
		plus++;
	}
	
	printf("\nThe number in the 6th position in the array is %i", array[5]);
	return 0;
}

