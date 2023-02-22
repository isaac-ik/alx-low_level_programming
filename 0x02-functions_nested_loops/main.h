/**
 * print_alphabet - prints lowwer letters from a-z
 * Return: void
 */
void print_alphabet(void)
{	
	int alpha = 97;
	for (; alpha < 122; alpha++)
	{
	printf("%c",char(alpha));
	}
	printf("\n");
}
