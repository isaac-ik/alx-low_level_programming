#include "main.h"

int _strlen(char *ps);

/**
  * _strcat - concentates two strings
  * @pdest: first string
  * @psrc: second string
  * Porgrammer: Isaac-ik
  * Return: the concentated string
  */
char *_strcat(char *pdest, char *psrc)
{
	int len1, len2, i, x;

	/* Find lenth of each string */
	len1 = _strlen(pdest);
	len2 = _strlen(psrc);

	/* iterate through the first string until last char */
	for (i = 0; i <= len1; i++)
	{
		/* At the last char which is '\0' */
		if (i == len1)
		{
			/* iterate through the second string */
			for (x = 0; x <= len2; x++)
			{
				*((pdest + i) + x) = *(psrc + x);
			}
		}
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
