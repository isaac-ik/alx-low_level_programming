#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - description goes here
 *
 * Description: prints out wheterh a number is +ve, zer or -ve
 * Return: always 0
 */
int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is postive\n";
	}
	else if (n == 0)
	{
		printf("is zero\n");
		}
	else
	{
		printf("is negative\n");
	}

	return (0);
}
