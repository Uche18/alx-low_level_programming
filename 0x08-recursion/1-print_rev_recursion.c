#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: An input string to reverse
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	char *start = s;

	if (*start)
	{
		_print_rev_recursion(start + 1);
		_putchar(*start);
	}
}
