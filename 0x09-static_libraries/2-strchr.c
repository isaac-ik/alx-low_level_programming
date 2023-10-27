#include "main.h"

/**
  * _strchr - locates a character in a string
  * @ps: string
  * @c: char to find in string
  * Description: Returns a pointer to the first occurrence of the character c
  * in the string s, or NULL if the character is not found
  * The terminating null byte is considered part of the string, so that
  * if c is specified as '\0', these functions return a pointer to
  * the terminator.
  * Programmer: Isaac-ik
  * Return: address of the first occurence of c, otherwise NULL
  */
char *_strchr(char *ps, char c)
{
	int i;

	/* loop through the string */
	for (i = 0; *(ps + i) != '\0' || *(ps + i) == '\0'; i++)
	{
		/* check if its a match */
		if (*(ps + i) == c)
		{
			return (ps + i);
		}
		else if (*(ps + i) != '\0' && *(ps + i) != c)
		{
			continue;
		}
		else
		{
			return ('\0');
		}
	}
	return ('\0');
}
