#include <stdio.h>

/**
  * main - the code goes down there
  *
  * Description: prints all single digits numbers of base 10
  * Output: 0123456789
  * Return: always 0
  */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar(10);
	return (0);
}
