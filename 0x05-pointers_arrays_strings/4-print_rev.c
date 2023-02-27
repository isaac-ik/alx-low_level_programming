#include "main.h"
/**
 * print_rev - prints a reverse of a string
 * @s: the string that will be printed in reverse
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int length;
	length = 0;
	int u;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (u = length; u>=0; u--)
	{
		_putchar(s[u]);
	}
	_putchar('\n');
}
