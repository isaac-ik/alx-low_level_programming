#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  main - main fucntion
 *  Description: takes in two +ve args and multiplies them.
 *  Programmer: Isaac-ik
 *  @argc: number of argumnets
 *  @argv: argument vector
 *  Return: result
 */
int main(int argc, char **argv)
{
	int index, c, num1, num2, result;
	/* if number of args is incorrect */
	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	/* check if it contains only digits */
	index = 1;
	while (index < argc)
	{
		c = 0;
		while (argv[index][c] != '\0')
		{
			if (argv[index][c] < 48 || argv[index][c] > 57)
			{
				printf("Error\n");
				exit(98);
			}
			c++;
		}
		index++;
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("The result is %d\n", result);

	return (result);
}
