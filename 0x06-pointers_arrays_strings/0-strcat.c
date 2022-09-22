#include "main.h"

/**
 * File: 0-strcat.c
 * Auth: Victor Ogbra
 * Desc: concatenates two strings, appends the source string to the destination
 * 	 string, overwrite the terminating null byte
 * @dest: Pointer to destination string to concatenates
 * @src: The pointer to source string
 *
 * Return: Pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
 *
