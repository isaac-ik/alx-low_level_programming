#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - varadic function
 * Programmer: Isaac-ik
 * Description: prints numbers
 * @pseparator: the  string to be printed in between the strings
 * @n: the number of strings passed
 * Return: nothing
 */
void print_strings(const char *pseparator, const unsigned int n, ...)
{
	unsigned int i;
	char *each_str;
	va_list str_args;

	va_start(str_args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			each_str = va_arg(str_args, char *);
			if (each_str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", each_str);
			}
			if (pseparator != NULL && i < (n - 1))
			{
				printf("%c ", *pseparator);
			}
		}
		printf("\n");
	}

	va_end(str_args);

}
