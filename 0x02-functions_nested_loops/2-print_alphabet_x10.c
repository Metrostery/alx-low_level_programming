#include "main.h"

/**
 * main - prints out letters
 *
 * Description: using new function
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
