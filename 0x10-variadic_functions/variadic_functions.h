#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *pseparator, const unsigned int n, ...);
void print_strings(const char *pseparator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
