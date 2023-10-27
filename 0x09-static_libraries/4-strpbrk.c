#include "main.h"
#include <stddef.h>

/**
  * _strpbrk - searches a string for any of a set of byte
  * @ps: string
  * @paccept: a string
  * Description:  locates the first occurrence in the
  * string s of any of the bytes in the string accept.
  * Programmer: Isaac-ik
  * Return: address of the first occurence of paccept in ps
  */
char *_strpbrk(char *ps, char *paccept)
{
	int i, u;
	char *pOccurence = NULL;

	for (i = 0; *(ps + i) != '\0'; i++)
	{
		if (*(ps + i) == *paccept)
		{
			pOccurence = ps + i;
			for (u = 0; *(paccept + u) != '\0'; u++)
			{
				if (*(ps + i) == *(paccept + u))
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
