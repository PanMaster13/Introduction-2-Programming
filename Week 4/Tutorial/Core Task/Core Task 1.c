/* FILE: Lab 4
 * Nested for Loop
 * Author: Jason Ang Chia Wuen
 * Last Modified: 25/3/2018 7:51pm
 */
 
#include <stdio.h>
#include <string.h> /* used for strcat() command */

int main()
{
	char pattern[6] = "*";
	int counter = 1;
	
	printf("%s", pattern);
	for( counter = 1; counter < 5; counter++)
	{
		strcat (pattern,"*"); /* addings character/string into existing string/character */
		printf("\n%s", pattern);
	}
	
	/* Optional Coding
	int x,y,a=1;
	
	for(x=0; x<5; x++)
	{
		for(y=0; y<a; y++)
		{
			printf("*");
		}
		
		printf("\n");
		a++;
	} */
	
	return 0;
}

