#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *ps);
void _puts(char *ps);
char *_strcpy(char *pdest, char *psrc);
int _atoi(char *ps);
char *_strcat(char *pdest, char *psrc);
char *_strncat(char *pdest, char *psrc, int n);
char *_strncpy(char *pdest, char *psrc, int n);
int _strcmp(char *ps1, char *ps2);
char *_memset(char *ps, char b, unsigned int n);
char *_memcpy(char *pdest, char *psrc, unsigned int n);
char *_strchr(char *ps, char c);
unsigned int _strspn(char *ps, char *paccept);
char *_strpbrk(char *ps, char *paccept);
char *_strstr(char *phaystack, char *pneedle);
#endif /* MAIN_H */
