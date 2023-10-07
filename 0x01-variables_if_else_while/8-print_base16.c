#include <stdio.h>

/**
  * main - the code goes down there
  *
  * Description: prints the hexadecimal numbers
  * Return: always 0
  */
int main(void)
{
	int alpha;

	for (alpha = 48; alpha <= 57; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 97; alpha <= 102; alpha++)
	{
		putchar(alpha);
	}
	putchar(10);
	return (0);
}
