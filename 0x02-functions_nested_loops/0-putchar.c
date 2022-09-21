#include <unistd.h>

/**
 * main - prints putchar
 * using main
 * Return: 0
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
