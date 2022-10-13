#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - File for main function
 * argc: Number of arguments passed in
 * @argv: Arguments stored in each index
 * Return Success
i */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	char 0;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	
	func = get_op_func(argv[2]);
	
	if (!func)
	{
	       	printf("Error\n");
		exit(99);
	}
	0 = *argv[2];
	if ((0 == '/' || 0 == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(num1, num2);
	printf("%d\n", result);
	return (0)
}
