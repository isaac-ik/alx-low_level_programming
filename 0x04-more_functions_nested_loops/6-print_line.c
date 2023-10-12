#include "main.h"

/**
  * print_line - draws a straight line in th terminal
  * @n: number of char length of the line
  * Programmer: Isaac-ik
  * return: nothing
  */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		--n;
	}
	_putchar('\n');
}
