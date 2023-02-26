#include <stdio.h>
/**
 * Main - Entry point
 * Description: 'print lowercase alphabets'
 * Return: Always 0
*/
int main(char*)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
