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

	for (length = 0; *s != "\0"; ++s)
	{
		++length;
	}
	return (length);
}
