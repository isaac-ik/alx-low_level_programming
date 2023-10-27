#include "main.h"

/**
  * _islower - see desscription
  * @c: a chacter thats to be evaluated/checked
  * Description: A fucntion to check for lowercase character
  * Return: 1 if c is lowercase and 0 if otherwise
  */
int _islower(int c)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (c == alpha)
		{
			return (1);
		}
	}
	return (0);
}
