#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calls.h"

int main (int argc, char* argv[])
{
	int i = 0,j = 0,k = 0, lcm = 0, valid = 0, a = 0, b = 0, gcd = 0;
	int letters = 0, digits = 0, power = 0;
	int selection = 0;

	printf("\nAuthor: Yesenia Molano Sanchez\n\n");
	printf("-------------WELCOME TO CS3333 INTERACTIVE PROGRAM!--------------\n");
	printf("\n\t\t----MENU----\n");
        printf("\t\t1 - Primes\n\t\t2 - Binomial Theorm\n\t\t0 - Quit\n\n");
	printf("Enter your selection: ");
        valid = scanf("%d", &selection);
	
	while(selection > 2 || selection < 0 || valid == 0)
	{
		printf("Incorrect input, please try again.\n");
		printf("Enter your selection: ");
		valid = scanf("%d", &selection);
	}


	while(selection != 0)
	{
		switch(selection)
		{
			case 0:
				printf("Thank you for your participation!\n");
				break;
			case 1:
				printf("Enter your 1st integer: ");
				scanf("%d", &a);
				printf("Enter your 2nd integer: ");
				scanf("%d", &b);
				printf("All the prime factors for %d are: ", a);
				primes(a);
				printf("All the prime factors for %d are: ", b);
				primes(b);
       				lcm = LCM(a, b);
				printf("The least common multiple for %d and %d is: %d\n", a, b, lcm);
        			gcd = GCD(a, b, lcm);
				printf("The greatest common divisor for %d and %d is: %d\n", a, b, gcd);
				break;
			case 2:
				printf("Enter an integer: ");
				scanf("%d", &power);
				printBinomial(power);
				break;			
		}
		printf("\n\t\t----MENU----\n");
		printf("\t\t1 - Primes\n\t\t2 - Binomial Theorm\n\t\t0 - Quit\n\n");
		printf("Enter your selection: ");
		valid = scanf("%d", &selection);
		if(valid == 0)
		{
			printf("You did not enter an integer.\n Try again or 0 to quit\n");
			valid = scanf("%d", &selection);
			while(valid == 0 && selection > 0)
			{
				printf("You did not enter an integer.\n Try again or 0 to quit\n");
				valid = scanf("%d", &selection);
			}
		}

		while(selection > 2 || selection < 0 || valid == 0)
        	{
                	printf("Incorrect input, please try again.\n");
                	printf("Enter your selection: ");
                	valid = scanf("%d", &selection);
	        }

	}
}
