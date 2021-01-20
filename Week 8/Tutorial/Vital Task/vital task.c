/* FILE: vital task
 * Booking PC Management
 * Author: Jason Ang Chia Wuen
 * Last modified: 8/5/2018 4:48pm
 */
 
#include <stdio.h>

typedef struct
{
	int labID;
	int pc[20];
	int vacant;
}openLab1;

typedef struct
{
	int labID;
	int pc[20];
	int vacant;
}openLab2;

typedef struct
{
	int labID;
	int pc[20];
	int vacant;
}openLab3;

typedef struct
{
	int labID;
	int pc[20];
	int vacant;
}openLab4;

typedef struct
{
	int labID;
	int pc[20];
	int vacant;
}openLab5;

void check_in(openLab1 *lab1, openLab2 *lab2, openLab3 *lab3, openLab4 *lab4, openLab5 *lab5)
{
	int stdID, labID, pc;
	printf("\nStudent ID:");
	scanf("%i", &stdID);
	
	printf("\nList of lab IDs: 101, 201, 301, 401, 501");
	printf("\nDesired lab (Enter lab ID):");
	scanf("%i", &labID);
	
	printf("\nPC ID (0 - 19):");
	scanf("%i", &pc);
	
	if (labID == 101)
	{
		if ((*lab1).pc[pc] != 0)
		{
			printf("The desired PC in Lab 101 has been booked, please try another PC");
		}
		
		else
		{
			(*lab1).pc[pc] = stdID;
		}
	}
	
	else if (labID == 201)
	{
		if ((*lab2).pc[pc] != 0)
		{
			printf("The desired PC in Lab 201 has been booked, please try another PC");
		}
		
		else
		{
			(*lab2).pc[pc] = stdID;
		}
	}
	
	else if (labID == 301)
	{
		if ((*lab3).pc[pc] != 0)
		{
			printf("The desired PC in Lab 301 has been booked, please try another PC");
		}
		
		else
		{
			(*lab3).pc[pc] = stdID;
		}
	}
	
	else if (labID == 401)
	{
		if ((*lab4).pc[pc] != 0)
		{
			printf("The desired PC in Lab 401 has been booked, please try another PC");
		}
		
		else
		{
			(*lab4).pc[pc] = stdID;
		}
	}
	
	else if (labID == 501)
	{
		if ((*lab5).pc[pc] != 0)
		{
			printf("The desired PC in Lab 501 has been booked, please try another PC");
		}
		
		else
		{
			(*lab5).pc[pc] = stdID;
		}
	}
	
	else
		printf("\nIncorrect input.");
	
}

void check_out(openLab1 *lab1, openLab2 *lab2, openLab3 *lab3, openLab4 *lab4, openLab5 *lab5)
{
	int id, i;
	printf("\nEnter your student ID:");
	scanf("%i", &id);
	
	for (i = 0; i < 20; i++)
	{
		if((*lab1).pc[i] == id)
		{
			(*lab1).pc[i] = 0;
			printf("\nYour current booking has been released.\n");
		}
	}
	
	for (i = 0; i < 20; i++)
	{
		if((*lab2).pc[i] == id)
		{
			(*lab2).pc[i] = 0;
			printf("\nYour current booking has been released.\n");
		}
	}
	
	for (i = 0; i < 20; i++)
	{
		if((*lab3).pc[i] == id)
		{
			(*lab3).pc[i] = 0;
			printf("\nYour current booking has been released.\n");
		}
	}
	
	for (i = 0; i < 20; i++)
	{
		if((*lab4).pc[i] == id)
		{
			(*lab4).pc[i] = 0;
			printf("\nYour current booking has been released.\n");
		}
	}
	
	for (i = 0; i < 20; i++)
	{
		if((*lab5).pc[i] == id)
		{
			(*lab5).pc[i] = 0;
			printf("\nYour current booking has been released.\n");
		}
	}
}

void displayPC(openLab1 *lab1, openLab2 *lab2, openLab3 *lab3, openLab4 *lab4, openLab5 *lab5)
{
	int i;
	
	printf("\nLab 101\n");
	for (i=0; i < 20; i++)
	{
		printf("PC no. %i: %i\n", i, (*lab1).pc[i]);
	}
	
	printf("\nLab 201\n");
	for (i=0; i < 20; i++)
	{
		printf("PC no. %i: %i\n", i, (*lab2).pc[i]);
	}
	
	printf("\nLab 301\n");
	for (i=0; i < 20; i++)
	{
		printf("PC no. %i: %i\n", i, (*lab3).pc[i]);
	}
	
	printf("\nLab 401\n");
	for (i=0; i < 20; i++)
	{
		printf("PC no. %i: %i\n", i, (*lab4).pc[i]);
	}
	
	printf("\nLab 501\n");
	for (i=0; i < 20; i++)
	{
		printf("PC no. %i: %i\n", i, (*lab5).pc[i]);
	}
}

int main()
{
	openLab1 lab1 = {0};
	openLab2 lab2 = {0};
	openLab3 lab3 = {0};
	openLab4 lab4 = {0};
	openLab5 lab5 = {0};
	int labArray[5];
	
	char choice;
	int loop=0;
	
	while (loop == 0)
	{
		printf("\nEnter 'i' to check in or 'o' to check out. Press any other key to end:");
		scanf(" %c", &choice);
		fflush(stdin);
		
		if (choice == 'i')
		{
			check_in(&lab1, &lab2, &lab3, &lab4, &lab5);
		}
	
		else if (choice == 'o')
		{
			check_out(&lab1, &lab2, &lab3, &lab4, &lab5);
		}
	
		else
		{
			printf("\nProgram has ended.\n");
			loop = 1;
			continue;
		}
		
		displayPC(&lab1, &lab2, &lab3, &lab4, &lab5);
	}
	return 0;
}

