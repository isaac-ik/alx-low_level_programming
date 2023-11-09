#include "3-calc.h"

/**
 * get_op_func - a function
 * Programmer: Isaac-ik
 * Description: selects the correct function to
 * perform the operation asked by the user.
 * @ps: operator sign
 * Return: a pointer to a function
 */
int (*get_op_func(char *ps))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].pop != NULL)
	{
		if (*ps == *(ops[i].pop))
		{
			return (ops[i].pf);
		}
		i++;
	}
	return (NULL);
}
