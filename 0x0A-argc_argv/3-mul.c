#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - main program
 * @argc: number of command line arguments
 * @argv: array of cmd line args
 * Description: multiplies two numbers passed into it
 * Programmer: Isaac-ik
 * Return: 0
 */
int main(int __attribute__((unused)) argc, char __attribute__((unused)) **argv)
{
	if (argc == 3)
	{
		int n, b, mul;

		n = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = n * b;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

