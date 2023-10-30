#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

char *create_array(unsigned int size, char c);
char *_strdup(char *pstr);
char *str_concat(char *ps1, char *ps2);
int **alloc_grid(int width, int height);
void free_grid(int **pgrid, int height);
char *argstostr(int ac, char **pav);
char **strtow(char *pstr);

#endif /* MAIN_H */

