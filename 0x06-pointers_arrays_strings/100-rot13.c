/**
*@rot13 - encodes
*@str:string to be encoded
*
*Return: char
*/
char *rot13(char *str) {
    char *result = str;
    int i, j;
    char c;

    for (i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (c >= 'a' && c <= 'z') {
            for (j = 0; j < 13; j++) {
                c++;
                if (c > 'z') {
                    c = 'a';
                }
            }
        } else if (c >= 'A' && c <= 'Z') {
            for (j = 0; j < 13; j++) {
                c++;
                if (c > 'Z') {
                    c = 'A';
                }
            }
        }
        result[i] = c;
    }

    return (result);
}
