/* FILE: Lab 2
 * Area and Volume
 * Author: Jason Ang Chia Wuen
 * Last Modified: 13/3/2018 4.51pm
 */
 
#include <stdio.h>

int main()
{
	double rad;
	double pie = 3.142;
	
	double area;
	double vol;
	
	printf("Calculating the area and volume of a sphere\n");
	
	printf("Radius of sphere (r):");
	scanf("%lf", &rad);
	
	area = 4 * pie * pow(rad, 2);
	
	vol = (double)4 / 3 * pie * pow(rad, 3);
	 
	printf("The area of the sphere is %f", area);
	
	printf("\nThe volume of the sphere is %f", vol);
	
	
	return 0;
}

