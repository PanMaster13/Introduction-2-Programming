/* FILE: Lab 2
 * Air Speed Velocity
 * Author: Jason Ang Chia Wuen
 * Last Modified: 13/3/2018 4.22pm
 */
 
#include <stdio.h>

int main()
{
	char b_name[50];
	double freq;
	double amp;
	double STRO_NUM = 0.33;
	double ans;
	
	printf("What is the name of the swallow?:");
	scanf("%[^\n]%*c", &b_name);
	
	printf("How much is the bird's wing beating frequency?:");
	scanf("%lf", &freq);
	
	printf("How much is the amplitude of each wing stroke?:");
	scanf("%lf", &amp);
	
	ans = ((double)freq * amp) / STRO_NUM;
	
	printf("The %s has an air speed velocity of %.2f m/s", b_name, ans);


	return 0;
}

