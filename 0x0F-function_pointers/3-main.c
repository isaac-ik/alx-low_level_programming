#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Programmer: Isaac-ik
 * Description: performs simple operations with its
 * argumnet
 * @argc: number of argumnets
 * @argv: array of arguments
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	/* Check if no of argumnet is not 4 */
	if (argc > 4 || argc < 4 || atoi(argv[1]) == 0 || atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		/* The operator is not among the defined ones */
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (result);
}

