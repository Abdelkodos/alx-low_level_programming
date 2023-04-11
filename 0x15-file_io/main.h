#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/* close files, adds in the end to close file_to and file_from */
void close_fl(int fd);
/* create file that stores length and content of file_from for the file_to */
char *create_buff(char *file);

#endif
