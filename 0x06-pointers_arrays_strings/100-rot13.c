/*
 * @rot13 - encodes
 * @str:string to be encoded
 * Return: char
 */

char *rot13(char *s)
{
    while (*s != '\0')
    {
        if ((*s >= 65 && *s <= 77) || (*s >= 97 && *s <= 109))
        {
            _putchar (*s + 13);
        }
        else if ((*s >= 78 && *s <= 90) || (*s >= 110 && *s <= 122))
        {
            _putchar (*s - 13);
        }
        else
        {
            _putchar(*s);
        }
        ++s;
    }
    return (0);
}
