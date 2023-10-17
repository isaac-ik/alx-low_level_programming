#include "main.h"

/**
  * puts2 - a function
  * @pstr: string
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
