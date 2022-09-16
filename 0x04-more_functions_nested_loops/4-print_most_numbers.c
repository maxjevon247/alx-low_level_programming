#include "main.h"

/**
 * print most numbers - Prints the numbers from 0-9 except for 2 & 4
 */
void print_most_number(void)
{
	int num;
	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) +'0');
	}
	_putchar('\n');
}
