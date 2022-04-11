#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *copy_str, *start;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	copy_str = malloc(sizeof(char) * (len + 1));
	start = copy_str;

	if (copy_str != NULL)
	{
		for (; i < len; i++)
		{
			copy_str[i] = *str;
			str++;
		}
		copy_str[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
