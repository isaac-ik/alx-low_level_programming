#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - computes password
*
* Return: 0
*/

#define PASSWORD_LENGTH 10

int main(void)
{
	srand(time(NULL));
	char password[PASSWORD_LENGTH + 1] = {0};
	
	for (int i = 0; i < PASSWORD_LENGTH; i++) 
	{
		int rand_num = rand() % 62;
		if (rand_num < 26)
		{ 
			password[i] = 'A' + rand_num;
		}
		else if (rand_num < 52) 
		{
			password[i] = 'a' + (rand_num - 26);
		}
		else 
		{
			password[i] = '0' + (rand_num - 52);
		}
	}
	printf("Random password: %s\n", password);
	
	return 0;
}
