#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Read text file print to STDOUT.
 * @letters: the number of letter to be read.
 * @filename: name of text file to read
 * Return: w - numbers of bytes printed and read
 *	0 - function fail or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;

fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);

free(buf);
close(fd);
return (w);
}
