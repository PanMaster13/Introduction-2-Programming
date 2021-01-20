/*
 * Program RPM.c
 *
 * Illustrates how a single function can pass back several values using
 * parameters passed by reference.
 *
 * Displays the minimum, maximum and average values of an electric motor
 * RPM data stored in integer array.
 */
 
#include <stdio.h>

/* Number of RPM entries in the array */
#define DATASIZE 16

/* Function prototypes */
void RPMstats(int * min, int * max, double * avg, int data[])
{
	int sum=0;
	int counter;
	
	(*min) = 5000;
	(*max) = 0;
	
	for (counter = 0; counter < 16; counter++)
	{
		sum = sum + data[counter];
	
		if (data[counter] < (*min))
		{
			(*min) = data[counter];
		}
		
		if (data[counter] > (*max))
		{
			(*max) = data[counter];
		}
	}
	
	(*avg) = sum / 16;
}

int main(void)
{

    /* Declare int variables to hold minimum, and maximum RPM values */
	int min, max;
    /* declare double variable to store the average RPM value */
	double average_rpm;

    /* Hard-coded RPM data values (in real life would be provided by sensor. */
    int RPMdata[DATASIZE] = {2023, 1987, 1902, 1902, 1689, 1778, 1939, 1546,
                      1345, 1777, 2321, 2322, 2331, 2200, 2222, 1954};
                      
    /* Call RPMstats function to obtain minimum, maximum and average RPM values */
	RPMstats(&min, &max, &average_rpm, RPMdata);
    
    /* Print the results */
	printf("\nMinimum RPM: %i", min);
	printf("\nMaximum RPM: %i", max);
	printf("\nAverage RPM: %.1f\n", average_rpm);
            
    /* Pause */
    printf("Press ENTER to exit");
    getchar();
    
    /* Return success to OS */
    return 0;
}

         

