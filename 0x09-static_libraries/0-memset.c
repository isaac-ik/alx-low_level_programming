#include "main.h"

/**
  * _memset - a function that fills memory with constant byte
  * @ps: memory area/address
  * @b: constant
  * @n: number of memory spaces to be filled
  * Description: fills the first n bytes of the meory pointed to by ps
  * with the constant byte of b
  * Programmer: Isaac-ik
  * Return: a char address
  */
char *_memset(char *ps, char b, unsigned int n)
{
	unsigned int i;

	/* iterate through from ps to n bytes after */
	for (i = 0; i < n; i++)
	{
		*(ps + i) = b;
		/**
		 * Assign the last to NULL
		 * if (i == n)
		 * {
		 *	*(ps + i) = '\0';
		 * }
		 * Assign the first to nth to the constant byte
		 * else
		 * {
		 *	*(ps + i) = b;
		 * }
		 */
	}
	return (ps);
}
