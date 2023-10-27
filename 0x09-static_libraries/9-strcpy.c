#include "main.h"
#include <stdio.h>

int _stren(char *ps);
/**
  * *_strcpy - function pointer
  * @pdest: pointer to the space to be copied to
  * @psrc: string to be copied
  * Description: copies the string pointed to by src,
  * including the terminating null byte (\0),
  * to the buffer pointed to by dest.
  * Programmer: isaac-ik
  * Return: pointer to dest
  */
char *_strcpy(char *pdest, char *psrc)
{
	int i, len;

	len = _strlen(psrc);
	/* iterate through the array from 0 to n */
	for (i = 0; i <= len; i++)
	{
		*(pdest + i) = *(psrc + i);
	}
	return (pdest);
}
/**
  * _strlen - a function
  * @ps: a pointer to a string
  * Description: returns the length of a string
  * Programmer: Isaac-ik
  * Return: length of the string
  */
int _strlen(char *ps)
{
	int length;
	char *pi;

	length = 0;
	pi = ps;

	while (*pi != '\0')
	{
		length = length + 1;
		pi = pi + 1;
	}
	return (length);
}
