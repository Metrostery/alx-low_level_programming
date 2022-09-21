#include "main.h"

/**
 * main - prints out letters
 * @print_alpha: prints
 *
 * Description: using new function
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;

	while (i < 10)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
