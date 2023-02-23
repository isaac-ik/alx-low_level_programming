/**
 * print_alphabet_x10 - This prints the alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int alpha;
	int no_of_times;
	for (no_of_times = 0; no_of_times<=9; no_of_times++)
	{
		for (alpha=97; alpha<=122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar(10);
	}
}
