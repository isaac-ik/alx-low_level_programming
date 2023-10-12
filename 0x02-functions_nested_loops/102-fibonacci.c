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
	int count, fN, sN, tN;

	count = 0;
	fN = 1;
	sN = 2;
	while (count < 49)
	{
		printf("%d, ", fN);
		tN = fN + sN;
		fN = sN;
		sN = tN;
		count = count + 1;
	}
	printf("\n");
	return (0);
}
