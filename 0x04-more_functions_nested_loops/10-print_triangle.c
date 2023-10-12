#include "main.h"

/**
  * print_triangle - prints a triangle line in the terminal
  * @size: dimension of height
  * Programmer: Isaac-ik
  * return: nothing
  */
void print_triangle(int size)
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
				if (item > (size-level))
				{
					_putchar(35);
				}
				else
				{
					_putchar(32);
				}
			}
			/* ASCII for \: 92 */
			_putchar('\n');
		}
	}
}
