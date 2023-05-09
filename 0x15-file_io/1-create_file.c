#include "main.h"

/**
 * create_file - creates a file.
 * @filename: a pointer to the file name to be created
 *@text_content: A pointer to a string written to a file
 *Return: -1 if the function fails
 	Otherwise return - 1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len =; text_content[len]);
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);

	return (1);
}
