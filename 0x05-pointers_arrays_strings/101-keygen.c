
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random valid passwords for the program 101-crackme.
 * Return: always 0
 */
int main(void)
{
	char resoul[200];
	int number = 0, random = 0;
	char *key = resoul;

	srand(time(NULL));
	while (number < 2645)
	{
		random = rand() % 122;
		if (random > 32)
		{
			*key = random;
			key = key + 1;
			number += random;
		}
	}
	*key = (2772 - number);
	*(key + 1) = '\n';
	printf("%s", resoul);
	return (0);
}
