#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code goes here
 *
 * Description: prints out the last digits stored in a variable
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n");
	}
	else if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n");
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	}
	/* your code goes there */
	return (0);
}
