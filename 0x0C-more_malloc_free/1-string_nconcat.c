#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	unsigned index, i, s;
	char *pnew;

	if (ps1 == NULL)
		ps1 = "";
	if (ps2 == NULL)
		ps2 = "";
	
	if (n >= sizeof(ps2) - 1)
	{
		s = sizeof(ps2) - 1;
	}
	else
	{
		s = n;
	}

	pnew = (char *)malloc(sizeof(ps1) + s - 1);
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
	for (i = 0; i <= s; i++)
	{
		pnew[index] = ps2[i];
		index++;
	}
	pnew[index] = '\0';
	return (pnew);
}
