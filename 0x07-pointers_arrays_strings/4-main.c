#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, worldlove";
    char *f = "love";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
