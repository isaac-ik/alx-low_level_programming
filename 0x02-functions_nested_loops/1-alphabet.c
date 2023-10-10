#include "main.h"

int _putchar(char c);

/**
  * print_alphabet - A function
  * Description: A function to print the alphabets
  * in lowercase
  * Return: void
  */
void print_alphabet(void)
{
	int asciiRepr;

	for (asciiRepr = 97; asciiRepr <= 122; asciiRepr++)
	{
		_putchar(asciiRepr);
	}
	_putchar(10);
}

