#include "main.h"

/**
  * print_diagonal - draws a diagonal line in th terminal
  * @n: number of char length of the line
  * Programmer: Isaac-ik
  * return: nothing
  */
void print_diagonal(int n)
{
	int item, level;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* iterating through differnet levels */
		for (level = 1; level <= n; ++level)
		{
			/* iterating through each space on a level */
			for (item = 1; item <= level; ++item)
			{
				if (item > (level - 1))
				{
					_putchar(92);
					_putchar(10);
				}
				/* ASCII for \: 92 */
				else
				{
					_putchar(32);
				}
			}
		}
	}
}
