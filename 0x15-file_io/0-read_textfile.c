#include "main.h"
#include <stdlib.h>

/**
 * len - get len
 * @pstr: string
 * Return: length
 */
int len(char *pstr)
{
	int count = 0, i;

	if (pstr == NULL)
	{
		return (0);
	}

	for (i = 0; pstr[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}

/**
 * read_textfile - reads a text file
 * Description:  reads a text file and prints it to the POSIX standard output.
 * @pfilename: pointer to the file
 * @letters: number of letters to print
 * Programmer: Isaac-ik
 * Return: number of actual letters read and printed, else 0, if any error
 */
ssize_t read_textfile(const char *pfilename, size_t letters)
{
	char *str;
	ssize_t file, count, l, num;

	/* create an empty buffer */
	str = (char *)malloc(sizeof(char) * (letters + 1));
	if (str == NULL)
		return (0);

	/* check if the filename is empty */
	if (pfilename == NULL)
	{
		free(str);
		return (0);
	}
	/* open the file */
	file = open(pfilename, O_RDONLY);
	/* check if the the file cant be opened */
	if (file < 0)
	{
		free(str);
		return (0);
	}
	/* read 'letters' no of byte into buffer 'str' from 'file' */
	count = read(file, str, letters);
	/* check if the file cant be read */
	if (count < 0)
	{
		close(file);
		free(str);
		return (0);
	}
	/* write to 'letters' no of byte from buffer 'str' to stdout */
	num = len(str);
	l = write(STDOUT_FILENO, str, num);
	if (l < 0)
	{
		close(file);
		free(str);
		return (0);
	}
	free(str);

	return (count);
}
