/* FILE: core task 1.c
 * String
 * Author: Jason Ang Chia Wuen
 * Last Modified: 12/5/2018
 */

#include <stdio.h>

int main()
{
	char string[9]; /*Need one extra slot*/
	int i;
	
	printf("\nInput Subject Code (e.g. COS10009):");
	scanf("%s", string);
	
	printf("Subject Code: %s\n", string);
	
	for (i=0; i<8; i++)
	{
		printf("%c\n", string[i]);
	}
	
	return 0;
}

