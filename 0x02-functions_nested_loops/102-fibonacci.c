#include <stdio.h>

/**
  * main - a program
  * Description: a program that prints the first 50 Fibonacci numbers,
  * starting with 1 and 2
  * Programmer: Isaac-ik
  * Return: 0
  */
int main(void)
{
	long int fN, sN, tN;
	int count;

	count = 1;
	fN = 1;
	sN = 2;
	while (count < 50)
	{
		printf("%ld, ", fN);
		tN = fN + sN;
		fN = sN;
		sN = tN;
		count = count + 1;
	}
	printf("%ld\n", fN);
	return (0);
}
