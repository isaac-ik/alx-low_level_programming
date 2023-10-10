#include "main.h"

/**
  * print_alphabet_x10 - see description below
  * Description: prints the lowercase alphabet 10times
  * Return: nothing
  */
void print_alphabet_x10(void)
{
	int alpha;
	int noOfIterations;

	for (noOfIterations = 1; noOfIterations <= 10; noOfIterations++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar(10);
	}
}
