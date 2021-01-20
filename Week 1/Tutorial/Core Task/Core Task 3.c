/* FILE Core task 3
 * Lab exercise 1
 * Author: Jason Ang 100087252
 * Modified 6/3/2018 4.50pm
 */
 
#include <stdio.h>

int main()
{

	char name[20]; /*[20] sets an range of characters to be accepted*/
	int age;
	int now_year;
	int born_year;
	
	printf("Please enter your name:");
	
	scanf("%s", &name);
	
	printf("How old are you this year?:");
	
	scanf("%i", &age);
	
	printf("What year is this year?:");
	
	scanf("%i", &now_year);
	
	born_year = now_year - age;
	
	printf("Hello %s, you were born in %i", name, born_year); 
	
	
	return 0;
}

