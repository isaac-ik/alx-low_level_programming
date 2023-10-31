#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *pstr);
/**
 * str_concat - a function
 * Description: returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * contents of s1, followed by the contents of s2,
 * and null terminated.
 * @ps1: the string
 * @ps2: the second string
 * Return: NULL if str = NULL; or address
 */
char *str_concat(char *ps1, char *ps2)
{
	int i, lengthOfS1, lengthOfS2, sum, u;
	char *pnew;

	lengthOfS1 = _strlen(ps1);
	lengthOfS2 = _strlen(ps2);
	sum = lengthOfS1 + lengthOfS2;

	pnew = malloc((sum - 1));
	if (pnew == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sum; i++)
	{
		for (u = 0; i < lengthOfS1 && ps1[u] != '\0'; u++)
		{
			pnew[i] = ps1[u];
			i++;
		}
		for (u = 0; i < sum - 1 && ps2[u] != '\0'; u++)
		{
			pnew[i] = ps2[u];
			i++;
		}
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
	return (count + 1);
}
