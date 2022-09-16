#include "main.h"

/**
 * print numbers - Print number 0 -9
 */
void print_number(void)
{
	int num;
	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
