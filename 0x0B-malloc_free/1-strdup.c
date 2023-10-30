#include "main.h"
#include <stdlib.h>

int _strlen(char *pstr);
/**
 * _strdup - a function
 * Description: returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @pstr: the string
 * Return: NULL if str = NULL; or address
 */
char *_strdup(char *pstr)
{
	int i, length;
	char *pnew;

	if (pstr == NULL)
	{
		return (NULL);
	}
	length = _strlen(pstr);

	pnew = malloc(sizeof(*pstr) * length);
	if (pnew == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (length); i++)
	{
		pnew[i] = pstr[i];
	}
	return (pnew);
}

/**
 * _strlen - a function
 * Description: returns length of a string.
 * @pstr: the string
 * Return: length of string
 */
int _strlen(char *pstr)
{
	int count = 0;

	while (pstr[count] != '\0')
	{
		count++;
	}
	return (count);
}
