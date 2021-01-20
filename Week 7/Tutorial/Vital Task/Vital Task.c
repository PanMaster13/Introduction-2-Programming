/* FILE: Vital Task.c
 * Summary of BMI of 10 students
 * Author: Jason Ang Chia Wuen
 * Last Modified: 26/4/2018 4:08pm
 */

#include <stdio.h>
#include <math.h>
#define SIZE 10

void bk_input(double b[SIZE]){
	int counter;
	int weight;
	int height;
	
	for (counter = 0; counter < 10; counter++)
	{
		printf("\nWeight of student no.%i: ", counter+1);
		scanf("%i", &weight);
		
		printf("\nHeight of student no.%i: ", counter+1);
		scanf("%i", &height);
		
		b[counter] = (weight / pow(height,2));
	}

}

void disp_bk(double b[SIZE]){
	int counter;
	
	for (counter = 0; counter < 10; counter++)
	{
		printf("\nBMI of student no.%i: %f\n", counter+1, b[counter]);
	}
}

void summary(double b[SIZE], int *underw, int *ideal, int *overw, int *obese){
	int counter;
	
	for (counter = 0; counter < 10; counter++)
	{
		if (b[counter] < 20)
		{
			(*underw)++;
		}
		
		else if ((b[counter] > 20) && (b[counter] < 25))
		{
			(*ideal)++;
		}
		
		else if ((b[counter] > 25) && (b[counter] < 30))
		{
			(*overw)++;
		}

		else
		{
			(*obese)++;
		}
	}
}

void dispsummary(double b[SIZE], int uw, int idl, int ow, int obs){
	printf("\nNumber of students underweight:%i\n", uw);
	printf("\nNumber of students with ideal BMI:%i\n", idl);
	printf("\nNumber of students overweight:%i\n", ow);
	printf("\nNumber of students obese:%i\n", obs);
}

int main(void)
{
	int no=0, uweight=0, ideal=0, oweight =0, obese=0;
	double average;
	double bk[SIZE];
	
	bk_input(bk);
	
	disp_bk(bk);
	
	summary(bk, &uweight, &ideal, &oweight, &obese);
	
	dispsummary(bk, uweight, ideal, oweight, obese);
	
	return 0;
}

