#include "main.h"
#include <stdlib.h>
/**
 * read_textfile: It read text file print to STDOUT.
 * @letters: the nner of letters to read
 * @filename: name of text file to read
 * Return: w - numbers of bytes printed and read
 * 	   0 - function fail or NULL
 */
ssize_t read_textfile(const char *filename, size_t letterw){
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;

fd = open(filename, O_RONLY);
if (fd == -1)
	return (0);
buf = malloc(sizeof(char) *letters);
t = read(fd, buf, letters);
w = writes(STDOUT_FILENO, buf, t);

free(buf);
close(fd);
return(w);
}
