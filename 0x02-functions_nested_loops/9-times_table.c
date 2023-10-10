#include "main.h"

/**
  * times_table - prints the times table
  * owner/programmer: isaac-ik
  * return: nothing
  */
void times_table(void)
{
	int num, xnum, multip;

	for (num = 0; num <= 9; num++)
	{
		for (xnum = 0; xnum <= 9; xnum++)
		{
			multip = num * xnum;
			if (multip / 10 > 0)
			{
				_putchar((multip / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((multip % 10) + '0');

			if (xnum < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(10);
			}
		}
	}
}
