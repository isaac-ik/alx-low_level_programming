/**
 * swap_int - swaps two integers
 *
 * @a: the first integers
 * @b: the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
