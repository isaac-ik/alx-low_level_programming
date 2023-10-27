#include "main.h"

/**
  * _memcpy - copies memory area
  * @pdest: desitination address
  * @psrc: byte sources
  * @n: number of bytes to be copied.
  * Desciption:copies n bytes from memory area src to memory area dest
  * Programmer: ISaac-ik
  * Return: destination address
  */
char *_memcpy(char *pdest, char *psrc, unsigned int n)
{
	unsigned int i;

	/* iterate through 0 to n-1 */
	for (i = 0; i < n; i++)
	{
		/* Assign soucre byte to desintation byte for each iteration */
		*(pdest + i) = *(psrc + i);
	}
	return (pdest);
}
