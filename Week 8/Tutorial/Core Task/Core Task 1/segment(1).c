/*
 * segment.c
 * This program defines a Segment structure in the cartesian
 * plane.
 *
 * This program repeatedly requests the coordinates of the end
 * points of a segment from the user. 
 * It then calculates the length of the segment using Pythagoras'
 * theorem and displays the result.
 *
 * The program keeps on requesting new segments data and 
 * displaying their lengths until the user decides to quit.
 *
 * Author: Jean-Loup Komarower
 * Last modified 12/02/2017 9:25am 
 */
 
#include <stdio.h>
#include <math.h>
#include <conio.h>
 
/* Define a Segment struct with four "double" members
 * x1 and y1 to define the coordinates of one end point,
 * and x2 and y2 to define the coordinates of the other
 * end point
 */

typedef struct
{
	double x1;
	double y1;
	double x2;
	double y2;
}Segment;


/* This function returns the length of the segment */
/* Using Pythagoras' theorem.                      */
double segLength(Segment seg)
{
	double length;
	length = sqrt((seg.x2 - seg.x1) * (seg.x2 - seg.x1) + (seg.y2 - seg.y1) * (seg.y2 - seg.y1));
	return length;
}

/* This function returns true if it is OK to continue */
int OKtoContinue(void)
{
    char choice;
    
    printf("Continue? (Y/N): ");
    choice = getch();
    
    return choice == 'Y' || choice == 'y';
}    

int main(void)
{
    /* Declare a segment variable */
	Segment coord;
	double length;
    
    /* Keep on requesting segment data and displaying length */
    do
    {
        /* request 1st point coordinates */
        printf("\nEnter first point coordinates x1 y1: ");
        scanf(" %lf %lf", &coord.x1, &coord.y1); 
        /* Flush keyboard buffer */
		fflush(stdin);
        /* request 2nd point coordinates */
        printf("\nEnter second point coordinates x2 y2: ");
        scanf(" %lf %lf", &coord.x2, &coord.y2);
        
	/* call segLength() function */
       	length = segLength(coord);
        /* Print length of segment */
        printf("\nSegment length: %lf\n", length);
    } while(OKtoContinue());
    
    return 0;
}

