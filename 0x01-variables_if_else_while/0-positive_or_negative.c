#include <stdlib.h>
#include <time.h>
/**
 * main - Assign random variable to n and print either its < or > or = 0
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is positive", n);
	return (0);
}
