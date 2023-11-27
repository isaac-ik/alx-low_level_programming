#include "main.h"

/**
 * len - gets the length of a str
 * @pstr: pointer to string
 * Programmer: Isaac-ik
 * Return: length of string
 */
int len(char *pstr)
{
	int count = 0, i;

	if (pstr == NULL)
		return (0);
	for (i = 0; pstr[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}

/**
 * create_file -  creates a file
 * @pfilename: points to filename
 * @ptext_content: pointer to the content
 * Programmer: Isaac-ik
 * Return: 1, on sucess or any other num depending on the encountred error
 */
int create_file(const char *pfilename, char *ptext_content)
{
	int fileD, s;

	if (pfilename == NULL)
		return (-1);
	/* Open a file */
	fileD = open(pfilename, O_RDWR | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fileD < 0)
	{
		close(fileD);
		return (-1);
	}

	/* write the content into the file */
	s = write(fileD, ptext_content, len(ptext_content));
	if (s < 0)
		return (-1);

	close(fileD);
	return (1);
}
