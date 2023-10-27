#include "main.h"

/**
  * _isalpha - see decription
  * @c: the charcter to be checked
  * Description: a function to check for alphabetic character
  * Return: 1 if c is a letter, lowercase or uppercase
  */
int _isalpha(int c)
{
	int alpha;

	/* CHECK THROUGH LOWERCASE*/
	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (c == alpha)
		{
			return (1);
		}
	}
	/* CHECK THROUGH UPPERCASE */
	for (alpha = 65; alpha <= 90; alpha++)
	{
		if (c == alpha)
		{
			return (1);
		}
	}
	return (0);
}
