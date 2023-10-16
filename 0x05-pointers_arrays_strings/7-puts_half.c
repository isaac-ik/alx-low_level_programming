#include "main.h"

int _strlen(char *ps);

/**
  * puts_half - a function
  * @pstr: a point to a str
  * Description: prints half of a string, followed by a new line
  * Programmer: Isaac-ik
  * Return: nothing
  */
void puts_half(char *pstr)
{
	int len, i, h_len;

	len = _strlen(pstr);
	h_len = len / 2;

	for (i = h_len; i <= len; i++)
	{
		_putchar(*(pstr + i));
	}
	_putchar('\n');
}
