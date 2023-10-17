#include "main.h"
#include <stdio.h>

int _len(int *ps);
/**
  * print_array - function
  * @pa: pointer to an array
  * @n: 0 to the nth number of arry elment will be
  * printed
  * Description: prints n elements of an array of integers,
  * followed by a new line.
  * Return: nothing
  */
void print_array(int *pa, int n)
{
	int i, len;

	len = _len(pa);

	if (n < 0 || n > len - 1)
	{
		printf("\n");
	}
	else
	{
		/* iterate through the array from 0 to n */
		for (i = 0; i <= n - 1; i++)
		{
			/* if at n, the last elment to be printed */
			if (i == n - 1)
			{
				printf("%d\n", *(pa + i));
			}
			else
			{
				printf("%d, ", *(pa + i));
			}
		}
	}
}
/**
  * _strlen - a function
  * @ps: a pointer to a string
  * Description: returns the length of a string
  * Programmer: Isaac-ik
  * Return: length of the string
  */
int _len(int *ps)
{
	int length;
	int *pi;

	length = 0;
	pi = ps;

	while (*pi != '\0')
	{
		length = length + 1;
		pi = pi + 1;
	}
	return (length);
}
