#ifndef MAIN_H
#define MAIN_H

int _strlen(char *ps);

char *_strcat(char *pdest, char *psrc);
char *_strncat(char *pdest, char *psrc, int n);
char *_strncpy(char *pdest, char *psrc, int n);
int _strcmp(char *ps1, char *ps2);
void reverse_array(int *a, int n);
char *string_toupper(char *p);
char *cap_string(char *p);
char *leet(char *p);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);


#endif /* MAIN_H */
