#include <stdio.h>

/**
  * main - a program that computes and prints 
  * the sum of all the multiples of 3 or 5 below 1024 (excluded)
  * 
  * Programmer: Isaac-ik
  * Return: 0
  */
int main(void)
{
	int n, sum;

	sum = 0;
	/* sets the range of the checks and computation */
	for (n = 1; n < 1024; n++)
	{
		/**
		  * perform the computation for only number
		  * divisible by 3 or 5
		  */
		if ((n % 3 == 0) || (n % 5) == 0)
		{
			sum = sum + n;
		}
		else
		{
			sum = sum + 0;
		}
	}
	printf("%d\n",sum);
	return (0);
}
