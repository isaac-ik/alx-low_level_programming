#include "main.h"
/**
 * power - find the power of a number
 * @base: the base
 * @exponent: the power
 * Programmer: isaac-ik
 * Return: the power
 */
int power(int base, int exponent)
{
	int i;

	if (exponent == 0)
	{
		return (1);
	}
	else if (exponent > 0)
	{
		int result = 1;
		for (i = 0; i < exponent; i++)
		{
			result *= base;
		}
		return (result);
	}
	else
	{
		int result = 1;
		exponent = -exponent;
		for (i = 0; i < exponent; i++)
		{
			result *= 1 / base;
		}
		return (result);
	}
}
