#include "main.h"

/**
 * _strcpy - copies string
 * @dest: array that returns
 * @src: pointers that recieve the string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int i;

	while(src[n] != '\0')
	{
		n++;
	}

	i = 0;
	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while(i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
