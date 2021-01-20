int main()
{
	char sick;
	printf("Is John sick?");
	scanf("%c", &sick);

	if (sick == 'Y')
	{
		printf("John does not need to go to work.");
	}
		
	else
	{
		printf("John needs to go to work.");
	}
	
	return 0;
}

