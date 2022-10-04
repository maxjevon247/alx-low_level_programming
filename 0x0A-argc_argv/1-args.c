#include <stdio.h>
/**
 * Argcs - Program that print all argument pass to it
 * @argc: argument count
 * @argv: argument vector -array of command argument
 * Return: Always return 0
 */
int main(int argc, char **argv)
{
	int num;
	(void) argv;
	num = argc - 1;
	printf("%d\n", num);
	return (0);
}
