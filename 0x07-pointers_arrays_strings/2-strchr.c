#include "main.h"

/**
  * _strchr - locates a character in a string
  * @ps: string
  * @c: char to find in string
  * Description: Returns a pointer to the first occurrence of the character c
  * in the string s, or NULL if the character is not found
  * Programmer: Isaac-ik
  * Return: address of the first occurence of c, otherwise NULL
  */
char *_strchr(char *ps, char c)
{
	int i;

	/* loop through the string */
	for (i = 0; *(ps + i) != '\0'; i++)
	{
		/* check if its a match */
		if (*(ps + i) == c)
		{
			return (ps + i);
		}
		else
		{
			continue;
		}
	}
	return ('\0');
}
