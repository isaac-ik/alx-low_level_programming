#include <stdio.h>

/**
  * main - the code goes down there
  *
  * Description: prints the alphabets in lowercase
  * in reverse.
  * Return: always 0
  */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar(10);
	return (0);
}
