#include "main.h"
/**
 * puts2 - print even of a string
 * @str: string to check
 *
 * Return: nothing
 */
void puts2(char *str)
{
	char *p;

	int i = 0;


	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		_putchar(*p);
		i++;
	}
	_putchar('\n');
}
