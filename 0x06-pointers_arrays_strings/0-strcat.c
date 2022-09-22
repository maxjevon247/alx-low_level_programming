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
	int count = 0, count2 = 0;

	while (*(dest + count ) != '\0')
	{
		count++;
	}
	while (count2 >= 0)
	{
	*(dest + count) = *(src + count2);
	if (*(src + count2) == *(dest + count))
		count ++;
		count2++;
	return (dest);

}
