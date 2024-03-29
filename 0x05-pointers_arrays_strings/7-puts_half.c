#include "main.h"

/**
 * puts_half - To print half of a string
 * @str: character to be computed
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, count = 0;

	while (str[i] != 0)
	{
		count++;
		i++;
	}
	if (count % 2 == 0)
	{
		for (i = count / 2; i < count; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (count + 1) / 2; i < count; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
