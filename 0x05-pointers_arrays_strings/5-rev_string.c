/**
 * rev_string - returns the reverse of a string
 * @s: the string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int count;

	count = 0;
	while (*s != 0)
	{
		count = count + 1;
		s++;
	}
	while (count > 0)
	{
		_putchar(s[count]);
		count = count - 1;
	}
}
