/**
 * _strlen - return the length of a string
 *
 * @s - strings whose length will be returned
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int length;
	
	length = 0;

	while (*s != "\0")
	{
		length = length + 1;
	}
	return (length);
}
