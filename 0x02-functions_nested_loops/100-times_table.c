#include "main.h"

/**
  * print_times_table - prints the n times table
  * @n: number
  * Programmer: Isaac-ik
  * Return: nothing
  */
void print_times_table(int n)
{
	int x, y;
	int multi;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			multi = x * y;
			/* PRINTS EACH DIGIT ONE AT A TIME */
			if (multi >= 0 && multi < 10)
			{
				_putchar(' ' + '0');
				_putchar(' ' + '0');
				_putchar(multi + '0');
			}
			else if (multi >= 10 && multi <= 99)
			{
				_putchar(' ' + '0');
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
			else if (multi > 99 && multi < 1000)
			{
				_putchar((multi /  100) + '0');
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
			_putchar(',' + '0');
		}
	}
}
