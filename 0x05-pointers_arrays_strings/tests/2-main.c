#include "../main.h"
#include <stdio.h>

int_strlen(char *);
/**
 * main - check for Helberton School studednts.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "Holberton!";
	len =_strlen(str);
	printf("%d\n", len);
	return (0);
}
