#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_testfile(cost char *filename, size_t letters);int create_file(const char *filename, char *text_content);
int append_text_to(const char *filename, char *text_content);

#endif
