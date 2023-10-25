#include "main.h"

/**
  * _print_rev_recursion -  prints a string in reverse.
  * @ps: string to be reversed
  * Programmer: Isaac-ik
  * Return: nothing
  */
void _print_rev_recursion(char *ps)
{
	if (*ps != '\0')
	{
		_print_rev_recursion(ps + 1);
		_putchar(*ps);
	}
}
