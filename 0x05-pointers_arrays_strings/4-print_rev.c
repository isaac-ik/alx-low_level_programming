#include "main.h"

/**
  * print_rev - a function
  * @ps: a pointer to a string arg
  * Description: prints a string, in reverse, followed by a new line.
  * Programmer: Isaac-ik
  * Return: nothing
  */
void print_rev(char *ps)
{
	/* find the last char and return length */
	int len;
	int i;

	len = 0;
	while(*ps != '\0')
	{
		len = len + 1;
		ps++;
	}
	ps = ps - len;

	/* prints from the back to the front */
	for(i = len; i >= 0; i--)
	{
		_putchar(*(ps + i));
	}
	_putchar('\n');
}
