#include <stdio.h>
/**
 * main - program to print the multiplication of two numbers
 * @argc - argument count
 * @argv - array of pointers to parameters
 *
 * Retrun: 0
 */

int main(int argc, char *argv[])
{
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n",((*argv[1]) * (*argv[2])));

		return (0);
	}
}
