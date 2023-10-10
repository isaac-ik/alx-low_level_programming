#include "main.h"

/**
  * jack_bauer - print evry minute of the day jack bauer style
  * Return: 0
  */
void jack_bauer(void)
{
	int fH, sH, fM, sM;

	for (fH = 48; fH <= 50; fH++)
	{
		for (sH = 48; sH <= 57; sH++)
		{
			if (fH == 50 && sH == 52)
				break;
			for (fM = 48; fM <= 53; fM++)
			{
				for (sM = 48; sM <= 57; sM++)
				{
					_putchar(fH);
					_putchar(sH);
					_putchar(58);
					_putchar(fM);
					_putchar(sM);
					_putchar(10);
				}
			}
		}
	}
}
