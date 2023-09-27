#include "main.h"

/**
 * _puts_recursion - recursive function to print to screen
 * @s: pointer to the string
 * Return: Always 0 (Success)
 */
void _put_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
