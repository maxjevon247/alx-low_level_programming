#include "holberton.h"
#include <unistd.h>

/**
 * Description: write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is rerturn, and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
