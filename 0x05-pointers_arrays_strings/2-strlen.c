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
	length = 0;
	while (*c != NULL)
	{
		length = length + 1;
		*(c+length);
	}
	return (length)
}
