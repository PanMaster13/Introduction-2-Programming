/* FILE: core task 2
 * Function & Struct (Pass by Reference)
 * Author: Jason Ang Chia Wuen
 * Last modified: 8/5/2018 4.00pm
 */
 
#include <stdio.h>

typedef struct
{
	int std_id;
	double score;
	char grade;
}Std;


void Std_Input(Std *data)
{
	
	printf("\nStudent ID: %i", (*data).std_id);
	printf("\nStudent Score: %lf", (*data).score);
	printf("\nStudent Grade: %c", (*data).grade);
	
	printf("\nID of new student:");
	scanf("%i", &(*data).std_id);
	
	printf("\nScore of new student:");
	scanf("%lf", &(*data).score);
	
	printf("\nGrade of new student:");
	scanf(" %c", &(*data).grade);
}

int main()
{
	Std myStd = {1111111, 0.00, 'N'};

	Std_Input(&myStd);
	
	printf("\nNew Studend ID: %i", myStd.std_id);
	printf("\nNew Student Score: %lf", myStd.score);
	printf("\nNew Student Grade: %c", myStd.grade);
	
	return 0;
}

