#include <stdio.h>
#include "main.h"
#include <string.h>

int power(int base, int exponent);

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
		int i, u, len1, len2;
		int n, b, unit, mul;

		len1 = strlen(argv[1]);
		len2 = strlen(argv[2]);

		for (i = 1; i < argc; i++)
		{
			for (u = 0; argv[i][u] != '\0'; u++)
			{
				printf("%c\n", argv[i][u]);
				if (i == 1)
				{
					unit = power(10, len1 - u - 1) * (argv[1][u] - '0');
					n = n + unit;
				}
				else
				{
					unit = power(10, len2 - u - 1) * (argv[2][u] - '0');
                                        b = b + unit;
				}
			}
		}

		/* n = argv[1] - '0'; */
		/* b = argv[2] - '0'; */
		
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

