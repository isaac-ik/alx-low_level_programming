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
	if (len % 2 == 0)
	{
		h_len = (len) / 2;
		for (i = h_len; i <= len - 1; i++)
		{
			_putchar(*(pstr + i));
		}
	}
	else
	{
		h_len = (len - 1) / 2;
		for (i = h_len + 1; i <= len - 1; i++)
		_putchar(*(pstr + i));
	}
	_putchar('\n');
}
/**
  * _strlen - a function
  * @ps: a pointer to a string
  * Description: returns the length of a string
  * Programmer: Isaac-ik
  * Return: length of the string
  */
int _strlen(char *ps)
{
	int length;
	char *pi;

	length = 0;
	pi = ps;

	while (*pi != '\0')
	{
		length = length + 1;
		pi = pi + 1;
	}
	return (length);
}
