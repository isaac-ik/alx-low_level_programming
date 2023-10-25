#include "main.h"

/**
  * _puts_recursion -  prints a string, followed by a new line.
  * @ps: string to be printed
  * Programmer: Isaac-ik
  * Return: nothing
  */
void _puts_recursion(char *ps)
{
	if (*ps != '\0')
	{
		_putchar(*ps);
		ps++;
		_puts_recursion(ps);
	}
	else
	{
		_putchar('\n');
	}
}
