#include "main.h"
/**
 * print_line - prints line
 * @n: parameter to be used
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
