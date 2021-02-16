#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j;
	char pass[12], s[15];

	srand((unsigned int)(time(NULL)));
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < 12; i++)
		{
			pass[i] = 33 + rand() % 94;
		}
		pass[i] = '\0';
		strcat(s, pass);
	}
	printf("%s\n", s);

	return (0);
}
