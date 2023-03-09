/**
 * factorial - returns the factorial of a number
 * @n: a number
 *
 * Return: if 0, return 1. if less than 0, return -1. else return the factoiral
 */

int factorial(int n)
{
	int v;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	v = n * factorial(n - 1);
	n--;
	return (v);
}
