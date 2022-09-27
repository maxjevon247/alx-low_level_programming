#include "main.h"

/**
 * 0-memset - fills memory with a constant bytes
 * @s: memory space to be filled
 * @b: byte
 * @n: number of spaces to fill
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned in i;
	
	i = 0;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
