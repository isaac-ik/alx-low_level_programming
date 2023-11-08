#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * Programmer: Isaac-ik
 * Description: prints a name
 * @pname: pointer to name
 * @pf: pointer to function
 * Return: nothing
 */
void print_name(char *pname, void (*pf)(char *))
{
	pf(pname);
}
