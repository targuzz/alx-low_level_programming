#include <stdio.h>
/**
 * main - Entry point
 * Description: 'pint alphabets in reverse'
 * Return: alwyas 0
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
