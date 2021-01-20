/* FILE: Lab 4
 * Login Verification
 * Author: Jason Ang Chia Wuen
 * Last Modified: 26/3/2018 11:21am
 */
 
#include <stdio.h>

int main()
{
	int d_loop = 10;
	
	int r_id = 10008725;
	int r_pin = 990410;

	int id;
	int pin;
	
	int count_id = 0;
	int count_pin = 0;
	
	int clone_id;
	int clone_pin;
	
	int clone_count_id;
	int clone_count_pin;
	
	int wrong_cntr = 0;
	
	while (d_loop == 10)
	{
	
		/* Checking number digits for Student ID */
		printf("\nInput Student ID (7 to 8 digits):");
		scanf("%i", &id);
	
		clone_id = id; /* Create duplicate as id will change */
		clone_count_id = count_id;
	
		while(id != 0)
		{
			id /= 10;
			++clone_count_id;
		}
	
		if ((clone_count_id == 7) || (clone_count_id == 8))
			printf(" ");
		
		else
		{
			printf("The Student ID should be in 7 or 8 digits, please try again");
			continue;
		}
	
		/* Checking number digits for Security Pin */
		printf("\nInput Security Pin (6 digits):");
		scanf("%i", &pin);
	
		clone_pin = pin; /* Create duplicate as pin will change */
		clone_count_pin = count_pin;
	
		while(pin != 0)
		{
			pin /= 10;
			++clone_count_pin;
		}
	
		if (clone_count_pin == 6)
			printf(" ");
		
		else
		{
			printf("Please enter a 6-digit pin");
			continue;
		}
		
		/* Validating Student Id and Security Pin */
		if ((clone_id == r_id) && (clone_pin == r_pin))
		{
			printf("\nSuccessfully Login");
			break;
		}
		
		else
		{
			printf("\nWrong password, try again");
			wrong_cntr++;
			
			if (wrong_cntr >= 5)
			{
				printf("\nAccess Denied");
				break;
			}
		}
		
	}
	return 0;
}

