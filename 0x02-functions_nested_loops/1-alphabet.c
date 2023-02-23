#include "main.h"
/**
 * print_alphabet - prints alphabet from a-z
 * Return: void
 */
void print_alphabet(void)
{
	alpha = 97;
	for(alpha; alpha = 122; alpha++)
	{
		_putchar(alpha);
	}
	_putchar(10);
}
