#include "main.h"
#include <stdio.h>

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
	int i;

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
