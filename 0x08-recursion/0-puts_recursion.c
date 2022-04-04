#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: An input string to print
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	char *start = s;

	if (*start)
	{
		_putchar(*start);
		_puts_recursion(start + 1);
	}
	else
		_putchar('\n');
}
