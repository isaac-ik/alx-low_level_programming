#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - varadic function
 * Programmer: Isaac-ik
 * Description: prints numbers
 * @pseparator: the  string to be printed in between the numbers
 * @n: the number of integers passed
 * Return: nothing
 */
void print_numbers(const char *pseparator, const unsigned int n, ...)
{
	unsigned int i;
	int each_num;
	va_list numbers_to_be_printed;

	va_start(numbers_to_be_printed, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			each_num = va_arg(numbers_to_be_printed, int);
			printf("%d", each_num);
			if (pseparator != NULL && i < (n - 1))
			{
				printf("%c ", *pseparator);
			}
		}
		printf("\n");
	}

	va_end(numbers_to_be_printed);

}
