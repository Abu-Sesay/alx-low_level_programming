#include "main.h"

/**
 * *_strpbrk - locate first occurance
 * @s: the string pointed to
 * @accept: the character to found
 *
 * Return: to dest
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
