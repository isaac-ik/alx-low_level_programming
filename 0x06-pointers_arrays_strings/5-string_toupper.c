#include "main.h"

/**
  * string_toupper - changes all lowercae to uppercase
  * @p: pointer to string
  * Programmer: isaac-ik
  * Return: pointer to the string
  */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		/* check if char in the position is lowercase */
		if (p[i] <= 122 && p[i] >= 97)
		{
			*(p + i) = *(p + i) - 32;
		}
	}
	return (p);
}
