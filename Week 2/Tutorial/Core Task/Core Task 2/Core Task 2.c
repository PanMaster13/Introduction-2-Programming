/* FILE: Lab 2
 * Writing algorithms to solve problems
 * Author: Jason Ang Chia Wuen
 * Last Modified: 13/3/2018 3.47pm
 */
 

#include <stdio.h>

int main()
{
	double x1;
	double y1;
	double x2;
	double y2;
	
	double x;
	double y;
	double ans;
	
	printf("Enter x-coordinates for point A:");
	scanf("%lf", &x1);
	
	printf("Enter y-coordinates for point A:");
	scanf("%lf", &y1);
	
	printf("Enter x-coordinates for point B:");
	scanf("%lf", &x2);
	
	printf("Enter y-coordinates for point B:");
	scanf("%lf", &y2);
	
	x = x1 - x2;
	y = y1 - y2;
	ans = sqrt((x * x) + (y * y));
	
	printf("Distance between two points is %.2f", ans);

	return 0;
}

