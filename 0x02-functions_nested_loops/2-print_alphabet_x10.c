#include "main.h"
/**
 * print_alphabet_x10 - Print 10 times the alphabets in lowercase
 *
 * Return: Aways 0
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 9; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
