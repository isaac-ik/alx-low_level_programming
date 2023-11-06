#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *ps);
/**
 * argstostr - function
 * Description: concatenates all the arguments of your program.
 * Programmer: Isaac-ik
 * @ac: argumnet count
 * @av: argumnet vector
 * Return: a pointer to an arry of char
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, u;
	char *pstr;

	len = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		/* ./argc how are you */
		len = len + _strlen(av[i]);
	}
	/* creating a a new arry of char for concentated arguments */
	pstr = (char *)malloc(sizeof(char) * (len + ac + 1));
	if (pstr == NULL)
		return (NULL);
	for (i = 0; i < len + ac; i++)
	{
		for (u = 0; u < ac; u++)
		{
			for (j = 0; av[u][j] != '\0'; j++)
			{
				pstr[i] = av[u][j];
				i++;
			}
			pstr[i] = '\n';
			i++;
		}
	}
	pstr[i] = '\0';
	return (pstr);
}
/**
  * _strlen - a function
  * @ps: a pointer to a string
  * Description: returns the length of a string
  * Programmer: Isaac-ik
  * Return: length of the string
  */
int _strlen(char *ps)
{
	int length;
	char *pi;

	length = 0;
	pi = ps;

	while (*pi != '\0')
	{
		length = length + 1;
		pi = pi + 1;
	}
	return (length);
}
