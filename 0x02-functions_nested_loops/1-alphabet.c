#include <stdio.h>
/**
 * main - prints alphabets
 * using main
 *
 * Return: 0
 */

putchar(ch); /* void print_alphabet(void) */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
