#include "main.h"

/**
  * _strcmp - compares two string
  * @ps1: the first string
  * @ps2: the second string
  * Description: compares the two strings s1 and s2
  * It returns an integer less than, equal to, or greater than zero
  * if s1 is found, respectively, to be less than, to match,
  * or be greater than s2
  * Demstration: $
  * ./string_comp ABC ABC <str1> and <str2> are equal
  * ./string_comp ABC AB # 'C' is 67; 'C' - '\0' = 67 s1>s2 (67)
  * ./string_comp ABA ABZ # 'A' is 65; 'Z' is 90 s1<s2 (-25)
  * ./string_comp ABJ ABC s1>s2 (7)
  * .
  * Pogrammer: Isaac-ik
  * Return: 0 if a match,
  * a number greater 0, if s1 is greater
  * a number less than 0, if s2 is greater
  */
int _strcmp(char *ps1, char *ps2)
{
	int i;

	for (i = 0; ps1[i] != '\0'; i++)
	{
		if (ps1[i] > ps2[i])
		{
			return (ps1[i] - ps2[i]);
		}
		else if (ps1[i] == ps2[i])
		{
			continue;
		}
		else
		{
			return (ps1[i] - ps2[i]);
		}
	}
	return (0);
}
