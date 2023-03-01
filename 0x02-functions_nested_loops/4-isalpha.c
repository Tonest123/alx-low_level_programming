#include "main.h"

/**
 * _isalpha - Checks if character is a letter
 * @c: ascii code of character to check
 *
 * Return: 1 if character is a letter, 0 if not
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
