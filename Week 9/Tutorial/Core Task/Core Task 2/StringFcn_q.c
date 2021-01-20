/*---------------------------------------------------*/
/*  String                                           */
/*                                                   */
/*  This program demonstrates string functions       */

#include <stdio.h>
#include <string.h>

int strg_len2(char *s);

int main(void)
{
   /*  Declare variables.  */
   char strg1[] = "This is one string ";
   char strg2[] = " and this is a second string";
   char *strg3; /* allocate memory dynamically */
  

   /*  Print the strg1, strg2 and their lengths.  */
   printf("\nContent of string 1: %s", strg1);
   printf("\nContent of string 2: %s", strg2);
   printf("\nLength of string 2: %i", strlen(strg1));
   printf("\nLength of string 2: %i\n", strlen(strg2));
 
   /* Allocate memory for strg3 */
   strg3 = (char *)malloc(sizeof(char) * (strlen(strg1) + strlen(strg2) + 1));

   /* Combine the strings (strg1 and strg2) to strg3*/
   strcpy(strg3, strg1);
   strcat(strg3, strg2);

   /*print strg3 and its length */
   printf("\nContent of string 3: %s", strg3);
   printf("\nLength of string 3: %i\n", strlen(strg3));
   
   /* strncat() - add only 10 char of strg2 to strg1 and store them into strg3 */
   strcpy(strg3, strg1);
   strncat(strg3, strg2, 10);
	
   /*print strg3 and its length */
   printf("\nNew content of string 3: %s", strg3);
   printf("\nNew length of string 3: %i\n", strlen(strg3));
 
   /* compare strg1 - strg2*/
   	if(strcmp(strg1, strg2) < 0)
   	{
   		printf("\nString 1 is smaller than string 2.");
	}
	
	else if(strcmp(strg1, strg2) == 0)
   	{
   		printf("\nString 1 is equal to string 2.");
	}
	
	else if(strcmp(strg1, strg2) > 0)
	{
		printf("\nString 1 is bigger than string 2.");
	}
  
   free(strg3);
   /*  Exit program.  */
   printf("\nPress enter\n");
   getchar();
   
   return 0;
} /*end main()*/

int strg_len2(char *s)
{
    int count = 0;
    while (*s != '\0') {
          count++;
          s++;
    }
    return count;
} /*end strg_len2()*/

