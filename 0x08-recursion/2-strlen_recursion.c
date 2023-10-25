#include "main.h"

/**
  * _strlen_recursion - returns the length of a string.
  * @ps: the string whose length is calculated.
  * Programmer: Isaac-ik
  * Return: length of the string
  */
int _strlen_recursion(char *ps)
{
	if (*ps == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(ps + 1));
}
