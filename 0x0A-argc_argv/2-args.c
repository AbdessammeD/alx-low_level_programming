#include<stdio.h>

/**
 * main - print a program's name
 * @argc: number of argument passed command line
 * @argv: an array of strings
 *
 * Return: 0 Always
 */
int main(int agrc, char *argv[])
{
	int i;

	for (i = 1; i <= argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
