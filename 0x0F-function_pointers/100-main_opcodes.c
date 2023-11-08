#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Programmer: Isaac-ik
 * Description:  prints the opcodes of its own main function
 * @argc: arguments count
 * @argv: array of arguments
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	unsigned char *pmain = (unsigned char *)main;
	int number_of_byte, i;

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_byte = atoi(argv[1]);
	if (number_of_byte <= 0)
	{
		printf("Error\n");
		exit(1);
	}

	printf("%p\n", pmain);
	for (i = 0; i < number_of_byte; i++)
	{
		printf("%02x ", pmain[i]);
		if (i < number_of_byte - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
