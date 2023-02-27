/**
 * rev_string - returns the reverse of a string
 * @s: the string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int count;
	char i;

	count = 0;
	i = '\0';
	while (*s != 0)
	{
		count = count + 1;
		s++;
	}
	while (count > 0)
	{
		i = i + s[count];
		count = count - 1;
	}
	*s = i;
}
