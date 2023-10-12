#include "main.h"

/**
  * more_numbers - prints numbers from 0 to 14
  * 10 times
  * Programmer: Isaac-ik
  * Return: nothing
  */
void more_numbers(void)
{
	int i, count, t;

	for (count = 1; count <= 10; count++)
	{
		for (t = 0; t <= 1; t++)
		{
			for (i = 48; i <= 57; i++)
			{
				if ((t == 1) && (i < 53))
				{
					_putchar(49);
				}
				else if ((t == 1) && (i >= 53))
				{
					break;
				}
				_putchar(i);
			}
		}
		_putchar('\n');
	}
}
