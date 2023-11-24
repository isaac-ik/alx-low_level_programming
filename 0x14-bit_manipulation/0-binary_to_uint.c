#include "main.h"
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * Programmer: Isaac-ik
 * @b: pointer to binary
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i = 0, sum = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '1' || b[i] != '0')
		{
			return (0);
		}
		i++;
	}
	while ()
	{
		num = atoi(b[i]);
		sum = sum + (num * (pow(2, i)));
		i++;
	}
	return (sum);
}
