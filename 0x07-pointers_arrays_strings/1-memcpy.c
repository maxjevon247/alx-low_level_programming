#include "main.h"

/**
 * char *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination to be copied to
 * @src: source to be copied
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char src[] = "copy this";
	char dest[100];

	memcpy(dest, src, strlen(src) + 1);
	putchar("src: %s\n", src);
	putchar("dest: %s\n", dest);
	return (dest)
}
