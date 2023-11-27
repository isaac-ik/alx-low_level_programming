#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

ssize_t read_textfile(const char *pfilename, size_t letters);
int create_file(const char *pfilename, char *ptext_content);
int append_text_to_file(const char *pfilename, char *ptext_content);

int len(char *pstr);

#endif
