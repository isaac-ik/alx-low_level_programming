#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @pfilename: pointer to filename
 * @ptext_content: pointer to text context
 * Programmer: Isaac-ik
 * Return: 1 if successful else, -1
 */
int append_text_to_file(const char *pfilename, char *ptext_content)
{
	int fileD, s, i = 0;

	if (pfilename == NULL)
		return (-1);

	/* open file */
	fileD = open(pfilename, O_WRONLY | O_APPEND);
	if (fileD < 0)
	{
		return (-1);
	}
	while (ptext_content[i] != '\0')
	{
		i++;
	}

	/* write to the file */
	s = write(fileD, ptext_content, i);
	if (s < 0)
	{
		close(fileD);
		return (-1);
	}
	i++;

	/* close file */
	close(fileD);
	return (1);
}
