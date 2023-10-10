#include "main.h"

/**
  * print_last_digit - prints last digit of a number
  * @n: the number
  * Owner/programmer: isaac-ik
  * Return: value of last digit
  */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return ((n * -1) % 10);
	}
	else if (n > 0)
	{
		return (n % 10);
	}
	else
	{
		return (0);
	}
}
