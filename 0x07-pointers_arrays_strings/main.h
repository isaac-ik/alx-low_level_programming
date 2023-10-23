#ifndef MAIN_H
#define MAIN_H

char *_memset(char *ps, char b, unsigned int n);
char *_memcpy(char *pdest, char *psrc, unsigned int n);
char *_strchr(char *ps, char c);
unsigned int _strspn(char *ps, char *paccept);
char *_strpbrk(char *ps, char *paccept);
char *_strstr(char *phaystack, char *pneedle);
void print_chessboard(char (*pa)[8]);
void print_diagsums(int *pa, int size);
void set_string(char **ps, char *pto);
int _putchar(char c);
#endif /* MAIN_H */
