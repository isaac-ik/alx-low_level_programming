/**
 * _strlen_recursion - Returns the length of a string recursively
 * @s: The string to get the length of
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	/* Base case: if the string is empty, its length is 0 */
	if (*s == '\0')
		return (0);

	/*
	 * Recursive case: add 1 to the length of the substring starting
	 * from the next character, until the base case is reached
	 */
	return (1 + _strlen_recursion(s + 1));
}
