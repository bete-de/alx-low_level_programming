#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: integer
 * Description: c is a digit
 * Return: 1 if c is a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
