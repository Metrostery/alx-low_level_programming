#include "main.h"

/**
 * swap_int - to swap integer value
 * @a: int a
 * @b: int b
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
