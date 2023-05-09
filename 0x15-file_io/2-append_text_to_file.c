#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: pointer to the name of the file
 * @text_content: The string to to be added to the file
 *
 * Return: -1 if function fail or filename is null.
 *	-1 if the file does not exist.
 *	-1 if the user lacks write permission.
 *	Otherwise 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
