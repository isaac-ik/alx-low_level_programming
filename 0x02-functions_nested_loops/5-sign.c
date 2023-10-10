#include "main.h"

/**
  * print_sign - see description
  * @n: number wwhose sign will be checked and printed
  * Description: A function to prints the sign of a number
  * Return: 1 if n is greater than zer0
  *		0 if n is zero
  *	-1 if n is less than 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
