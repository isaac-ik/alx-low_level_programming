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
