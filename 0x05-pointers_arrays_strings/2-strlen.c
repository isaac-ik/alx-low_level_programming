/**
 * _strlen - return the length of a string
 * @s: the string whose length will be returned
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
