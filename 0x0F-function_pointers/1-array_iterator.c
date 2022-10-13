#include <stdio.h>
#include "function_pointers.h"

/**
 * array_interator - This function prints out all contents in the array
 * @array: The array being passed in
 * @size: The size of the array.i.e number of indexes
 * @action: The pointer to a functioin
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i; /* Unsigned int, because size_t can never be negative */
	
	if (size <= 0)
		return;
	if (array == NULL || action == NULL)
		return;
	for (i = 0; < size; i++)
		action(array[i]);
}
