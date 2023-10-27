#include <stdio.h>

/**
 * main - main program
 * @argc: number of command line arguments
 * @argv: array of cmd line args
 * Description: add two numbers passed into it
 * Programmer: Isaac-ik
 * Return: 0
 */
int main(int __attribute__((unused)) argc, char __attribute__((unused)) **argv)
{
	if (argc == 3)
	{
		int n,b, mul;

		n = *argv[1] - '0';
		b = *argv[2] - '0';
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

