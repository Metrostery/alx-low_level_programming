#include "main.h"

/**
 * _strlen - prints lenght of string
 * @s: string
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
