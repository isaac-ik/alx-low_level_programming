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
		/* do nothing */
	}
	else
	{
		/* iterating through differnet levels */
		for (level = 1; level <= n; level++)
		{
			/* iterating through each space on a level */
			for (item = 0; item < level; item++)
			{
				_putchar(' ');
			}
			/* ASCII for \: 92 */
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
