#include "main.h"

/**
  * reverse_array - reverses the content of an array
  * @pa: the array of integers
  * @n: number of elemnets in the array
  * Programmer: Isaac-ik
  * Return: nothing
  */
void reverse_array(int *pa, int n)
{
	int i, half;
	/* Declare a temporary holder */
	int tempV;

	if (n % 2 == 0)
		half = n / 2;
	else
		half = (n - 1) / 2;

	/* iterate through from beginning to half of n */
	for (i = 0; i < half; i++)
	{
		tempV = *(pa + i);
		*(pa + i) = *(pa + n - 1 - i);
		*(pa + n - 1 - i) = tempV;
	}
}
