#include "main.h"

/**
 * _memset - fills memory with a constant
 * @s: string to fill
 * @b: canstant to use
 * @n: first n bytes to fill
 *
 * Return: a pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
