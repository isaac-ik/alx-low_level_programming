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

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (length-1; length>=0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
