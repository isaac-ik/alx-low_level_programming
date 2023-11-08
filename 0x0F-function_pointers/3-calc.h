#ifndef CALC_H
#define CALC_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/* ADDITION */
int op_add(int a, int b);

/* SUBTRACTION */
int op_sub(int a, int b);

/* MULTIPLICATION */
int op_mul(int a, int b);

/* DIVISION */
int op_div(int a, int b);

/* MODULUS */
int op_mod(int a, int b);

/* OPERATION SELECTOR */
int (*get_op_func(char *ps))(int, int);

/**
 * struct op - Struct op
 *
 * @pop: The operator
 * @pf: The function associated
 */
typedef struct op
{
	char *pop;
	int (*pf)(int a, int b);
} op_t;
#endif
