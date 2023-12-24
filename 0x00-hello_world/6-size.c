#include <stdio.h>

/**
 * main - entry point
 * Programmer: Isaac-ik
 * Descripption: prints the size of various types
 * on the computer it is compiled and run on.
 * Return: 0
 */
int main(void)
{
	printf("The Size of a char: %d byte(s)\n", sizeof(char));
	printf("The Size of a int: %d byte(s)\n", sizeof(int));
	printf("The Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("The Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("The Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
