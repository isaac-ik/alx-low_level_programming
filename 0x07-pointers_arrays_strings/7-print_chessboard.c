#include "main.h"

/**
  * print_chessboard - prints the chessboard
  * @pa: board
  * Programmer: Isaac-ik
  * Return: nothing
  */
void print_chessboard(char (*pa)[8])
{
	int i, z;

	z = 0;

	for (i = 0; i < 8; i++)
	{
		for (z = 0; z < 8; z++)
		{
			if (z == 7)
			{
				_putchar(pa[i][z]);
				_putchar('\n');
			}
			else
			{
				_putchar(pa[i][z]);
			}
		}
	}
}
