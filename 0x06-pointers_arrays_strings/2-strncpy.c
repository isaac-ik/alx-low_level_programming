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
	int i;

	/**
	  * iterate through the second char
	  * until condition is meet
	  * condition: n has been reached or the end of
	  * the second str has been reached.
	  */
	for (i = 0; i < n || *(psrc + i) == '\0'; i++)
	{
		*(pdest + i) = *(psrc + i);
	}
	return (pdest);
}
