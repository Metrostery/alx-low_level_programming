#include <stdio.h>

/**
 * main - check the code
 * Description - prints pointer
 *
 * Return: always 0.
 */

int main(void)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	printf("n = %d\n", n);

	*p = 98;
	printf("n = %d\n", n);
	return (0);
}
