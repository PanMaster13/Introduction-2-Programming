/* FILE: Lab 2
 * Number Systems
 * Author: Jason Ang Chia Wuen
 * Last Modified: 13/3/2018 5.17pm
 */
 
#include <stdio.h>

int main()
{
	int bit_1;
	int bit_2;
	int bit_3;
	int bit_4;
	int bit_5;
	int bit_6;
	int bit_7;
	int bit_8;
	
	int deci;
	int remain;
	
	int hex1;
	int hex2;
	int num_hex;
	char *letter1[1];
	char *letter2[1];
	char letter_hex[2];
	
	printf("Please enter the 1st bit of your binary number (0 or 1):");
	scanf("%i", &bit_1);
	
	printf("Please enter the 2st bit of your binary number (0 or 1):");
	scanf("%i", &bit_2);
	
	printf("Please enter the 3st bit of your binary number (0 or 1):");
	scanf("%i", &bit_3);
	
	printf("Please enter the 4st bit of your binary number (0 or 1):");
	scanf("%i", &bit_4);
	
	printf("Please enter the 5st bit of your binary number (0 or 1):");
	scanf("%i", &bit_5);
	
	printf("Please enter the 6st bit of your binary number (0 or 1):");
	scanf("%i", &bit_6);
	
	printf("Please enter the 7st bit of your binary number (0 or 1):");
	scanf("%i", &bit_7);
	
	printf("Please enter the 8st bit of your binary number (0 or 1):");
	scanf("%i", &bit_8);
	
	deci = (bit_1 * pow(2, 7)) + (bit_2 * pow(2, 6)) + (bit_3 * pow(2, 5)) + (bit_4 * pow(2, 4)) + (bit_5 * pow(2, 3)) + (bit_6 * pow(2, 2)) + (bit_7 * pow(2, 1)) + (bit_8 * pow(2, 0));
	
	printf("The decimal value of your binary number is %i", deci);
	
	hex1 = deci % 16;
	remain = deci / 16;
	hex2 = remain % 16;
	
	num_hex = 100 * hex2 + hex1;
	printf("\nThe hexadecimal value of your binary number is %i", num_hex);
	
	return 0;
}


