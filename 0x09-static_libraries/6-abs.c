#include "main.h"

/**
  * _abs - computes the absolute value of an int
  * @n: value to be evaluated on
  * Return: 0
  */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}
