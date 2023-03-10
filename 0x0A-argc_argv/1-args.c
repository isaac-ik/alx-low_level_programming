#include <stdio.h>
/**
 * main - program to print the number of parameter passed
 * @argc: argument count
 * @argv: array of pointers to parameters
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
