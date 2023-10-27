#include "main.h"

/**
  * _strncpy - copies a string
  * @pdest: buffer to accomadate the copied string
  * @psrc: string who chars will be copied
  * @n: n number of char from psrc to be copied
  * programmer: Isaac-ik
  * Return: pointer to the copied char
  */
char *_strncpy(char *pdest, char *psrc, int n)
{
	int i, u;

	/* iterate through form 0 to n */
	for (i = 0; i < n; i++)
	{
		/**
		  * check if
		  * the last char of str has reached and
		  * n has not been reached
		  */
		if (psrc[i] == '\0' && i < n)
		{
			/**
			  * if yes, iterate from that point while replacing the remaining space
			  * with NULL char until n is reached
			  */
			for (u = i; u < n; u++)
			{
				pdest[u] = '\0';
			}
			i = u;
		}
		/* else: do normal copying */
		else
		{
			*(pdest + i) = *(psrc + i);
		}
	}
	return (pdest);
}
