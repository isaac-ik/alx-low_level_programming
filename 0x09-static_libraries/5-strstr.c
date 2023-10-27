#include "main.h"
#include <stddef.h>

/**
  * _strstr - searches a string for any of a set of byte
  * @phaystack: string
  * @pneedle: a string
  * Description:  locates the first occurrence in the
  * string s of any of the bytes in the string accept.
  * Programmer: Isaac-ik
  * Return: address of the first occurence of paccept in ps
  */
char *_strstr(char *phaystack, char *pneedle)
{
	int i, u;
	char *pOccurence = NULL;

	for (i = 0; *(phaystack + i) != '\0'; i++)
	{
		if (*(phaystack + i) == *pneedle)
		{
			pOccurence = phaystack + i;
			for (u = 0; *(pneedle + u) != '\0'; u++)
			{
				if (*(phaystack + i) == *(pneedle + u))
				{
					i = i + 1;
					continue;
				}
				else
				{
					pOccurence = NULL;
					break;
				}
			}
		}
	}
	return (pOccurence);
}
