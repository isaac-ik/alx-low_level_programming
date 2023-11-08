#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
void print_name(char *pname, void (*pf)(char *));
void array_iterator(int *parray, size_t size, void (*paction)(int));
int int_index(int *parray, int size, int (*pcmp)(int));


#endif
