#include <stdio.h>

/* Using constructors in C */
void start_before_main(void) __attribute__((constructor));
/**
 * start_before_main - a function that prints something
 * before the main function is executed using a constructor.
 * Return: Nothing
 */
void start_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");

}
