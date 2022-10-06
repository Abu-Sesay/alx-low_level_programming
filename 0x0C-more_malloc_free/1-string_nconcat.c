#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - To concatenate str
 * @s1: The first chr
 * @s2: The second chr
 * @n: num of chrs
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int i = 0, size1 = 0;
	unsigned int j = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != '\0')
	{
		i++;
		size1++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
		size2++;
	}
	if (n >= size2)
		n = size2;
	s = (char *)malloc((size1 + n + 1) * sizeof(char));
	if (s == NULL)
		s[i] = s1[i];
	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}

