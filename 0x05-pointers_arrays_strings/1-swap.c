#include "main.h"

/**
  * swap_int - a function
  * @pa: a pointer to the first arg
  * @pb: a pointer to the second arg
  * Description: swaps the values of two integers
  * Programmer: Isaac-ik
  * Return: nothing
  */
void swap_int(int *pa, int *pb)
{
	int c;

	c = *pa;
	*pa = *pb;
	*pb = c;
}
