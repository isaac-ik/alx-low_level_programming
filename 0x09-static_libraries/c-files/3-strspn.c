#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @ps: string
  * @paccept: a set of chars
  * description: Returns the number of bytes in the initial segment of s
  * which consist only of bytes from accept
  * Programmer: Isaac-ik
  * Return: length of a prefix substring
  */
unsigned int _strspn(char *ps, char *paccept)
{
	unsigned int i, u, z, position;
	char found[] = "";

	position = 0;
	/* loop through the string */
	for (i = 0; *(ps + i) != '\0'; i++)
	{
		/* loop through the accept string */
		for (u = 0; *(paccept + u) != '\0'; u++)
		{
			/* checks */
			if (*(paccept + u) == *(ps + i))
			{
				/* iterate through the found array */
				for (z = 0; found[z] != '\0' || found[0] == '\0'; z++)
				{
					/* if matches and not in the found array */
					if (*(ps + i) != found[z] && found[z + 1] == '\0')
					{
						/* put in the found array */
						found[z + 1] = *(paccept + u);
						found[z + 2] = '\0';
						position = i + 1;
						break;
					}
					else if (*(ps + i) == found[z])
					{
						break;
					}
					else
					{
						continue;
					}
				}
			}
		}
	}
	return (position);
}
