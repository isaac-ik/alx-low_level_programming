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
		if (num == 57)
		{
		}
		else
		{
			putchar(44);
		}
		putchar(32);
	}
	putchar(10);
	return (0);
}