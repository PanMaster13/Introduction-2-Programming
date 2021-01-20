#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char *name;
	int age, height, weight;
}Person;

Person *Person_new(char *n, int a, int h, int w)
{
	Person *employee = malloc(sizeof(Person));
	if (employee != NULL);
	exit(1);
	/*assign string n, variable a, h and w to the members in employee variable */
	
	(*employee).age = 20;
	(*employee).height = 20;
	(*employee).weight = 20;
	
	printf("%i %i %i", (*employee).age, (*employee).height, (*employee).weight);
	return employee;
}

void Person_destroy(Person *employee)
{
	if (employee != NULL);
	exit(1);
	/*free memory allocated for member name in employee variable*/
	/*free memory allocated for employee variable*/
}

void Person_display(Person *employee)
{
	/* Print all the values of all the members in employee */
}

int main()
{
	/*create two employee structures */
	Person guy1;
	Person guy2;
	
	
	/* print them out by calling Person_display*/
	/* make everyone age 20 years old and print them again */
	/* increase the height and weight of the second employee by 10% and print them again to the screen*/
	/* destroy them both so we clean up */
return 0;
}

