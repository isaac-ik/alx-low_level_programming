#include "main.h"

/**
  * _isupper - a function that checks for uppercase
  * Programmer: Isaac-ik
  * @c: the ASCII repr of the letter
  * Return: 1 if upper, 0 if otherwise
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
