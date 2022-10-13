#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - This function print a name using function pointer
 * @name: String to be printed
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if (name == NULL || f == NULL)
		return;
	ptr = f
		ptr(name);
}
