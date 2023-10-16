#include "main.h"

/**
  * _puts - a function
  * @pstr: a pointer to a string arg
  * Description: prints a string, followed by a new line, to stdout
  * Programmer: Isaac-ik
  * Return: nothing
  */
void _puts(char *pstr)
{
	while(*pstr != '\0')
	{
		_putchar(*pstr);
		pstr = pstr + 1;
	}
	_putchar('\n');
}
