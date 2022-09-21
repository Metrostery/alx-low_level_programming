#include "main.h"

/**
 * main - prints alphabets
 * description: uses a called function
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a';  ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
