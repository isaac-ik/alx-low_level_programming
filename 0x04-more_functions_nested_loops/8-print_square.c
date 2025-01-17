#include "main.h"

/**
  * print_square - prints a diagonal line in the terminal
  * @size: dimension of the square
  * Programmer: Isaac-ik
  * return: nothing
  */
void print_square(int size)
{
	int item, level;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* iterating through differnet levels */
		for (level = 1; level <= size; ++level)
		{
			/* iterating through each space on a level */
			for (item = 1; item <= size; ++item)
			{
				if (item > (size - 1))
				{
					_putchar(35);
					_putchar(10);
				}
				else
				{
					_putchar(35);
				}
			}
		}
	}
}
