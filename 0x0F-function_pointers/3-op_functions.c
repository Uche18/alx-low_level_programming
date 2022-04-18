#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - a function that adds two integers a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: sum of a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtracts two integers a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: result of a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two integers a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: result of a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two integers a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: result of a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - a function that gets the modulas of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: result of a % b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
