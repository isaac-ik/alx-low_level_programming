#include "3-calc.h"

/**
 * op_add - function
 * Programmer: Isaac-ik
 * Description: returns the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function
 * Programmer: Isaac-ik
 * Description:  returns the difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function
 * Programmer: Isaac-ik
 * Description: returns the product of a and b
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function
 * Programmer: Isaac-ik
 * Description: returns the result of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function
 * Programmer: Isaac-ik
 * Description: returns the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
        {
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
