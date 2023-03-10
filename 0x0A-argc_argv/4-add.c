#include<stdio.h>
#include<stdlib.h>

/**
 * main - print a program's name
 * @argc: number of argument passed command line
 * @argv: an array of strings
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, f;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			f = atoi(argv[i]);
			if (f > 0)
				sum += f;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
