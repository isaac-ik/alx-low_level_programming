#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * Description:  reads a text file and prints it to the POSIX standard output.
 * @pfilename: pointer to the file
 * @letter: number of letters to print
 * Programmer: Isaac-ik
 * Return: number of actual letters it could read and print, else 0, if any error occured
 */
ssize_t read_textfile(const char *pfilename, size_t letters)
{
	char *str;
	ssize_t file, count, l;

	/* create an empty buffer */
	str = (char *)malloc(sizeof(char) * (letters + 1));

	/* check if the filename is empty */
	if (pfilename == NULL)
		return (0);
	/* open the file */
	file = open(pfilename, O_RDONLY);
	/* check if the the file cant be opened */
	if (file < 0)
		return (0);

	/* read 'letters' no of byte into buffer 'str' from 'file' */
	count = read(file, str, letters);
	/* check if the file cant be read */
	if (count < 0)
		return (0);

	/* write to 'letters' no of byte from buffer 'str' to standard output */ 
	l = write(STDOUT_FILENO, str, letters);
	if (l < 0)
		return (0);

	return (count);
}
