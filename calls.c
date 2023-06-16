#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"calls.h"

int LCM(int a, int b)
{
	int i = 0, j = 0, k = 1, max = 0, lcm = 0;
	int* mult1 = (int*)malloc(sizeof(int) * b);
	int* mult2 = (int*)malloc(sizeof(int) * a);
	max = a*b;
	for(i = 0; i < b; i++)
	{
		mult1[i] = a*k;
		k++;
	}
	k = 1;
	for(i = 0; i < a; i++)
	{
		mult2[i] = b*k;
		k++;
	}
	// now looping through every value for every value in the first matrix
	for(i = 0; i < b; i++)
	{
		for(j = 0; j < a; j++)
		{
			if(mult1[i] == mult2[j])
			{
				lcm = mult1[i];
				return lcm;
			}
		}
	}
	free(mult1);
	free(mult2);
}
void primes(int a)
{
	if(a == 1)
	{
		printf("No prime factors");
	}
	int i = 3;
	double sq = sqrt(a);
	while(a % 2 == 0)
	{
		printf("%d ", a);
		a = a/2;
	}
	for(i = 3; i <= sq; i = i+2)	
	{
		while(a % i == 0)
		{
			printf("%d ", i);
			a = a/i;
		}
	}
	if(a > 2)
	{
		printf("%d ", a);	
	}
	printf("\n");

}
int GCD(int a, int b, int lcm)
{
	int mult = 0, gcd = 0;
	mult = a*b;
	gcd = mult/lcm;
	return gcd;
}
void printBinomial(int n)
{
	int i = 0, combination = 0;
	int sub = 0;
	for(i = 0; i <= n; i++)
	{
		sub = n - i;
		combination = comb(n, i);
		if(i == 0)
			printf("x^%d + ", n);
		else if(i == n)
			printf("y^%d\n", i);
		else
			printf("%dx^%dy^%d + ", combination, sub, i);
	}
}
int comb(int n, int r)
{
	int i = 0;
	int num = 1, denom1 = 1, denom2 = 1, multden = 0, divide = 0;
	int subtract = 0;
	subtract = n-r;
	if(r == 0)
	{
		divide = 1;
		return divide;
	}
	for(i = n; i >= 1; i--)
	{
		num *= i;
	}
	for(i = subtract; i >= 1; i--)
	{
		denom1 *= i;
	}
	for(i = r; i >= 1; i--)
	{
		denom2 *= i;
	}
	multden = denom1 * denom2;
	divide = num/multden;
	return divide;
}








