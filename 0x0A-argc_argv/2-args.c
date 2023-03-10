#include <stdio.h>
/**
 * main - program to print the all parameter passed into it
 * @argc - argument count
 * @argv - array of pointers to parameters
 *
 * Retrun: 0
 */

int main(int argc, char *argv[])
{
	int start = 0;
	while (start != argc)
	{
		printf("%s\n", argv[start]);
		start++;
	}

	return (0);
}
