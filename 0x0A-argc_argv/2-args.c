#include <stdio.h>

/**
 * main - main program
 * @argc: number of command line arguments
 * @argv: array of cmd line args
 * Description: prints the all arguments passed into it
 * Programmer: Isaac-ik
 * Return: nothing
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}

