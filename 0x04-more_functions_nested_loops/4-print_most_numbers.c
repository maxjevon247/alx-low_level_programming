#include "main.h"

/**
 * print most numbers - Prints the numbers from 0-9 except for 2 & 4
 */
void print_most_number(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
