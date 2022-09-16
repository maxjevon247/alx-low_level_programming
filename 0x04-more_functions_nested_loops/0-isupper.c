#include "main.h"

/**
 * _isupper - Check for uppercase character
 * @c: The character to be check
 *
 * Return: 1 if character is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
