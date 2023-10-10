#include "main.h"

int _putchar(char c);

/**
  * main - main fucntion
  * Description: A program to print _putchar
  * using _putchar function
  * Return: Always 0
  */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
