#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a varadic function
 * Programmer: Isaac-ik
 * Description: returns the sum of all its parameters.
 * @n: number of varaible we will like to sum up
 * Return: the result, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);
	return (sum);
}

