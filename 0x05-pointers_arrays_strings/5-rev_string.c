#include "main.h"

int _strlen(char *ps);
/**
  * rev_string - a function
  * @ps: a pointer to a string arg
  * Description: reverses a string.
  * Programmer: Isaac-ik
  * Return: nothing
  */
void rev_string(char *ps)
{
	/* find the last char and return length */
	int len, temph;
	int i;

	len = _strlen(ps);

	/* swaps values at each ends */
	for (i = 0; i < len / 2; i++)
	{
		temph = *(ps + i);
		*(ps + i) = *(ps + len - 1 - i);
		*(ps + len - 1 - i) = temph;
	}
}

/**
  * _strlen - a function
  * @ps: a pointer to a string
  * Description: returns the length of a string
  * Programmer: Isaac-ik
  * Return: length of the string
  */
int _strlen(char *ps)
{
	int length;
	char *pi;

	length = 0;
	pi = ps;

	while (*pi != '\0')
	{
		length = length + 1;
		pi = pi + 1;
	}
	return (length);
}
