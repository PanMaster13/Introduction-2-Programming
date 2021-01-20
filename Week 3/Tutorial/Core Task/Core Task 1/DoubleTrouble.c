/*-------------------------------------------------------------
 * File: DoubleTrouble.c
 *
 *	        Illustrates floating points comparison problems
 *------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x;
	double y;

	/* -------------------------------------------------------- */	  	     
	/* Simple case where floating point comparisons do not work */
	x = 9.3 * 0.1;
	y = 0.93;

	if (fabs(x - y) < 0.001)
	{
		printf("they're equal of course %f %f\n",x, y );
	}
	else
	{
		printf("not equal!?, how come? %f %f\n",x, y);
		
	}   
	   
	printf("x = %.20f, y = %.20f", x, y);
	   	      
	return 0;
}

