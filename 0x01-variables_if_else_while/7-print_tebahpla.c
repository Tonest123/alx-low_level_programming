#include <stdio.h>
/**
 * main - entry point
 * Description: 'Print the lowercase alphabets in reverse'
 * Return: 0
*/
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
