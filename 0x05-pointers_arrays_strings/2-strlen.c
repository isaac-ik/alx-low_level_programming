#include <stddef.h>
/**
 * _strlen - return the length of a string
 *
 * @s - strings whose length will be returned
 *
 * Return: 0
 */
int _strlen(char *c)
{
	int length;
	char str[] = *c;
	length = 0;

	while (str[length] != NULL)
	{
		length = length + 1
	}
	return (length);
}
