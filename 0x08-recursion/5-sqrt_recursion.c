#include "main.h"

int real_root(int n, int i)
/**
 * sqrt_recursion - Returns the natural square root of a number
 * @n:  number
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_root(n, 0));
}

/**
 * _real_root - find the natural sqrt of a num
 * @n: input
 * @i: counter
 * return: sqrt
 */
int real_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_root(n, i * i));
}
