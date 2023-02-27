/**
 * reset_to_98 - takes a pointer to an int and update the value it points to
 *
 * @n: variable
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	int *ptr;
	ptr = &n;
	*ptr = 98;
}
