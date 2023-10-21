#include "main.h"

/**
 * append_text_to_file - This appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: If the function fails or filename is NULL return -1.
 *         Otherwise it returns  1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	w = write(i, text_content, len);

	if (i == -1 || w == -1)
		return (-1);

	close(i);

	return (1);
}
