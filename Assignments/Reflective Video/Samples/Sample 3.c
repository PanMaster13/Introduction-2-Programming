int main()
{
	char sick;
	char condition;
	printf("Is John sick?");
	scanf(" %c", &sick);

	if (sick == 'Y')
	{
		printf("John does not need to go to work.");
		printf("\nIs John very sick?");
		scanf(" %c", &condition);

		if (condition == 'Y')
		{
			printf("John needs to go to a hospital.");
		}
			
		else
		{
			printf("John can go to a hospital or a clinic.");
		}
	}
		
	else
	{
		printf("John needs to go to work.");
	}
	
	return 0;
}

