#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: integer ASCII value of character
 *
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	return ((c >= 97  && c <= 122) ? 1 : 0);
}
