#include <stdio.h>

/**
  * main - the code goes down there
  *
  * Description: prints the alphabets in lowercase
  * Return: always 0
  */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar(10);
	return (0);
}
