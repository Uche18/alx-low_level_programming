#include "main.h"

int find_sqrt(int prev, int root);

/**
 * _sqrt_recursion - a function that returns the natural square root
 * of a number.
 * @n: an input integer n
 * Return: Square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(1, n));
}

/**
 * find_sqrt - find square root
 * @prev: previous value
 * @root: square root value
 * Return: the square root
 */
int find_sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (find_sqrt(prev + 1, root));
}
