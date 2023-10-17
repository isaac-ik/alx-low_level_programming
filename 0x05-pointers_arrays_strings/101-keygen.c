#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * generateKey - generate password
  * @key: key
  * @keyLength: length of paasword
  * return: nothing
  */
void generateKey(char *key, int keyLength)
{
	int i;
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	/* Characters for the key */
	const int charsetSize = sizeof(charset) - 1;

	srand(time(NULL));/* Seed the random number generator */
	for (i = 0; i < keyLength; i++)
	{
		key[i] = charset[rand() % charsetSize];
	}
	key[keyLength] = '\0'; /* Null-terminate the key */
}

/**
  * main - function
  * Return: 0
  */
int main(void)
{
	char key[17]; /* Key with a maximum length of 16 characters */

	generateKey(key, 16); /* Generate a random key of length 16 */
	printf("%s\n", key);
	return (0);
}
