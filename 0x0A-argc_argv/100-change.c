#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * Description: prints the minimum number of coins
 * to make change for an amount of money.
 * You can use an unlimited number of coins of values
 * 25, 10, 5, 2, and 1 cent
 * Useage: ./change cents
 * Programmer: Isaac-ik
 * @argc: argumnet count
 * @argv: an array of arguments
 * Return: 1, if the number of arguments passed 
 * to your program is not exactly 1, 0 if it works
 */
int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
	int cents, count, num;
	int zero = 0;

	count = 0;
	if (argc == 2)
	{
		cents = atoi(argv[1]);
		printf("%d\n", cents);
		if (cents >= 25)
		{
			num = cents - 25;
			count = count + num;
			cents = cents - (num * 25);
		}
		if (cents % 10 == 0)
		{
		       	num = cents % 10;
			count = count + num;
			cents = cents - (num * 10);
		}
		if (cents % 5 == 0)
		{
			num = cents % 5;
			count = count + num;
			cents = cents - (num * 5);
		}
		if (cents % 2 == 0)
		{
			num = cents % 2;
			count = count + num;
			cents = cents - (num * 1);
		}
		if (cents % 1 == 0)
		{
			num = cents % 1;
			count = count + num;
			cents = cents - (num * 1);
		}
		printf("jjjj%d\n", count);
		return (0);
	}
	else if (argc == 3)
	{
		printf("333%d\n", zero);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
