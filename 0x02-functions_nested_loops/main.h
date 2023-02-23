#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_alphabet - prints lowwer letters from a-z
 * Return: void
 */
void print_alphabet(void)
{	
	int alpha = 97;
	for (; alpha < 122; alpha++)
	{
	_putchar(alpha);
	}
}
