#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: pointer to the element
 * @n: no of times to print
 *
 */

void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
