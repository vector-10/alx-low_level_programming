#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: parameter to be checked
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
