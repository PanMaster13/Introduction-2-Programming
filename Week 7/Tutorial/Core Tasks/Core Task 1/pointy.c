/*
 * pointy.c
 *
 * A program to demonstrate assignment and dereferencing of 
 * pointer variables.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Declare int variable x and num. Initialise num to an initial value. */
    int x, num = 123;
	
	/* Declare int array. Initialise to some values. */
    int arr[5] = {0,2,4,6,8};
    
    /* Declare an int pointer numPtr. Initialise it to point to num */
    int *numPtr;
	numPtr = &num;
        
    /* Print content of num */
    printf("The content of num is %i\n", num);
	
	/* Print the address of num in decimal format */
    printf("The address of num is %i\n", &num);
	
	/* Print content of numPtr */
    printf("The content of numPtr is %i\n", numPtr);
    
    /* Print the address of numPtr in decimal format */
    printf("The address of numPtr is %i\n", &numPtr);
    
	/* Print content of num, using the derefferencing of pointer numPtr */
    printf("The content of num is %i\n", *numPtr);
	
	
	
	/***** Two statements below demonstrate that array name is actually a pointer *****/
	/***** It points to the first element of an array *****/
	
	 /* Print the address of arr[0] in decimal format */
    printf("The address of arr[0] is %i\n", &arr[0]);
	
	/* Print content of arr */
    printf("The content of arr is %i\n", arr);
	
	/* Assign the address in arr into numPtr */
	numPtr = &arr[0];
	
	/* Print the array using numPtr */
	for (x=0; x<5; x++)
		printf("%i ", numPtr[x]);
	
	
    /* pause */
    printf("\nPress Enter to exit");
    getchar();
    
    /* return success code to OS */
    return 0;
}

