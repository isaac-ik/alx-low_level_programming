#include "main.h"

/**
  * print_most_numbers - prints numbers from 0 to 9
  * except 2 and 4
  * Programmer: Isaac-ik
  * Return: nothing
  */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i ==  52)
		{
			/* Do nothing */
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
