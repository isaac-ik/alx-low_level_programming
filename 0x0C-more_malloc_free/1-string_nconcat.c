#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  string_nconcat - function
 *  Description: concatenates two strings.
 *  eturned pointer shall point to a newly allocated space in memory,
 *  which contains s1, followed by the first n bytes of s2, and null terminated
 *  Programmer: Isaac-ik
 *  @ps1: first string
 *  @ps2: second string
 *  @n: the number of the second string to concentate
 *  Return: pointer to new string, or NULL if any problem
 */
char *string_nconcat(char *ps1, char *ps2, unsigned int n)
{
	unsigned int index, i, s, spacef1, spacef2;
	char *pnew;

	if (ps1 == NULL)
		ps1 = "";
	if (ps2 == NULL)
		ps2 = "";

	spacef1 = strlen(ps1);
	spacef2 = strlen(ps2);

	if (n >= spacef2)
	{
		spacef2 = strlen(ps2);
	}
	else
	{
		spacef2 = n;
	}

	pnew = (char *)malloc(spacef1 + spacef2 + 1);
	if (pnew == NULL)
	{
		return (NULL);
	}

	index = 0;
	for (i = 0; ps1[i] != '\0'; i++)
	{
		pnew[index] = ps1[i];
		index++;
	}
	for (s = 0; s <= spacef2; s++)
	{
		pnew[index] = ps2[s];
		index++;
	}
	pnew[index] = '\0';
	return (pnew);
}
