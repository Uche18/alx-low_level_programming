#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: Apointer to concatened strings or NULL if str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, *start1, *start2;
	int i = 0, len1 = 0, len2 = 0;

	start1 = s1;
	start2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = start1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = start2;
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	start1 = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (start1);
}
