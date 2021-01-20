int main()
{
	char gender;
	int age;
	printf("What is your gender?");
	scanf("%c", &gender);

	printf("What is your age?");
	scanf("%i", &age);

	printf("Your gender is %c and you are %i years old", gender, age);
	return 0;
}

