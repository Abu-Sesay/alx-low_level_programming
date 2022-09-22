#include "main.h"

/**
 * leet - the function that encodes tehe string
 * @s: chr pointer
 * Return: chr
 */
char *leet(char *s)
{
	char c[] = "AaEeOoTtLl";
	char n[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
