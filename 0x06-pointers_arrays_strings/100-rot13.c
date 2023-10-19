#include "main.h"

/**
  * leet - encodes a string into 1337
  * @p: pointer to string
  * Description: sLetters a and A should be replaced by 4
  * Letters e and E should be replaced by 3
  * Letters o and O should be replaced by 0
  * Letters t and T should be replaced by 7
  * Letters l and L should be replaced by 1
  * Return: pointer to char
  */
char *leet(char *p)
{
	int i, u;
	char letters[] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M'};
	char number[] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};

	/* iterate through the string */
	for (i = 0; p[i] != '\0'; i++)
	{
		/* iterate through letters array */
		for (u = 0; letters[u] != '\0'; u++)
		{
			/**
			  * check if there is a match btwn
			  * the current char and any elments in letters array
			  */
			if (p[i] == letters[u])
			{
				/* if yes, replace with number's elmnt with the same index */
				p[i] = number[u];
			}
		}
	}
	return (p);
}
