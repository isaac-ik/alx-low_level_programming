#include "main.h"

int _strlen(char *ps);
/**
  * puts2 - a function
  * @pstr - string
  * Description: prints every other character of a string, 
  * starting with the first character, followed by a new line.
  * Programmer: Isaac-ik
  * Return: nothing
  */
void puts2(char *pstr)
{
	int ev = 0;

	while (*(pstr + ev) != '\0')
	{
		_putchar(*(pstr + ev));
		ev = ev + 2;
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
