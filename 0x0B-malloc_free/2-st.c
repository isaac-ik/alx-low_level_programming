#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *pstr);
/**
 * str_concat - a function
 * Description: returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * contents of s1, followed by the contents of s2,
 * and null terminated.
 * @ps1: the string
 * @ps2: the second string
 * Return: NULL if str = NULL; or address
 */
char *str_concat(char *ps1, char *ps2)
{
        int i, len1, len2, sum, u;
        char *pnew;

        len1 = _strlen(ps1);
        len2 = _strlen(ps2);
        sum = len1 + len2;

        printf("%d", sum);
        printf("The length of the 1st str is %d\n", len1);
        printf("The length of the 2nd str is %d\n", len2);
        pnew = malloc((sum - 1));
        if (pnew == NULL)
        {
                return (NULL);
        }
        for (i = 0; i < sum; i++)
        {
                for (u = 0; i < len1 && ps1[u] != '\0'; u++)
                {
                        pnew[i] = ps1[u];
                        printf("%d %c\n", i, ps1[u]);
                        i++;
                }
                for (u = 0; i < sum - 1 && ps2[u] != '\0'; u++)
                {
                        pnew[i] = ps2[u];
                        printf("%d %c\n", i, ps2[u]);
                        i++;
                }
        }
        return (pnew);
}
/**
 * _strlen - a function
 * Description: returns length of a string.
 * @pstr: the string
 * Return: length of string
 */
int _strlen(char *pstr)
{
        int count = 0;

        while (pstr[count] != '\0')
        {
                count++;
        }
        return (count + 1);
}
