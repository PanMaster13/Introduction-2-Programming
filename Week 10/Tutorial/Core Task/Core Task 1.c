/* FILE: Core Task 1.c
 * Text File Input / Output
 * Author: Jason Ang Chia Wuen
 * Last Modifed: 14/5/2018 10:49am
 */
 
#include <stdio.h>

int main()
{
	FILE *textfile;
	
	int total, marks, counter;
	char name[20];
	
	textfile = fopen("records.txt", "a"); /*append (no reading needed*/
	if (textfile == NULL)
	{
		printf("\nError opening file.\n");
		exit(1);
	}
	
	printf("\nTotal number of students: ");
	scanf("%i", &total);
	
	for (counter = 0; counter < total; counter++)
	{
		printf("\nName of student no.%i:", counter + 1);
		scanf("%s", &name);
		
		printf("\nMarks of student no.%i:", counter + 1);
		scanf("%i", &marks);
		
		fprintf(textfile, "\n%s", name);
		fprintf(textfile, "\n%i", marks);
	}
	
	fclose(textfile);
	return 0;
}

