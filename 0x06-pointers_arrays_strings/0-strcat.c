#include "main.h"

/**
 * File: 0-strcat.c
 * Auth: Victor Ogbra
 * Desc: concatenates two strings, appends the source string to the destination
 * 	 string, overwrite the terminating null byte
 * @str1: The source string to concatenates
 * @dest: The destination string
 *
 * Return: Always return 0
 */
int main()
{
	char destination[] = "Coding is";
	char source[] = "fun!";

	strcat(destination,source);
	_putchar("%s\n", destination);
	return (0);
}
 *
