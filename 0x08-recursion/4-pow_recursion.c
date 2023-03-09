/**
 * _pow_recursion - returns the factorial of a number
 * @x: a number
 * @y: the power
 * Return:  the power
 *
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	power = x * _pow_recursion(x, y - 1);
	return (power);
}

