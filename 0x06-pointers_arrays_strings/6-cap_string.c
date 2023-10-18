#include "main.h"

/**
  * cap_string - capitilizes all words of a string
  * @p: pointer to a string
  * Separators of words: space, tabulation, new line,
  * , ; . ! ? " ( ) { and }
  * Programmer: Isaac-ik
  * Return: pointer to string
  */
char *cap_string(char *p)
{
	int i, u;
	char seperators[] = {32, 9, 10, 46, 44, 59, 33, 63, 34, 40, 41, 123, 125};

	/* iterate through string */
	for (i = 0; *(p + i) != '\0'; i++)
	{
		/**
		  * iterate through the string and then
		  * check if the char before current char is
		  * space, tabulation, new line,
		  * , ; . ! ? " ( ) { and }
		  */
		for (u = 0; seperators[u] != '\0'; u++)
		{
			/**
			  * check if prev char among word separators
			  * or its the first letter in the string
			  */
			if (p[i - 1] == seperators[u] || i == 0)
			{
				/**
				  * if yes
				  * check if current char is lowercase
				  */
				if (p[i] >= 97 && p[i] <= 122)
				{
					/* Replace with Uppercase */
					p[i] = p[i] - 32;
				}
			}
		}
	}
	return (p);
}

