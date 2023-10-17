#include "main.h"

/**
  * rev_string - a function
  * @ps: a pointer to a string arg
  * Description: reverses a string.
  * Programmer: Isaac-ik
  * Return: nothing
  */
void rev_string(char *ps)
{
	/* find the last char and return length */
	int len;
	int i;

	len = 0;
	while (*ps != '\0')
	{
		len = len + 1;
		ps++;
	}
	ps = ps - len;

	/* prints from the back to the front */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(ps + i));
	}
	_putchar('\n');
}
