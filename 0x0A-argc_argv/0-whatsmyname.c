#include<stdio.h>
/**
 * main - print a program's name
 * @argc: number of argument passed command line
 * @argv: an array of strings
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
