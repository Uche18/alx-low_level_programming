#include "main.h"
#include <stdlib.h>

int count_words(char *str, int i);
int word_counter(char *str);

/**
 * strtow - a function that splits a string into words.
 * @str: string to be splitted
 * Return: pointer to an array of strings (words) or null
 **/
char **strtow(char *str)
{
	char **start;
	int i, j, k, words;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = word_counter(str);
	if (words < 1)
		return (NULL);
	start = malloc(sizeof(char *) * (words + 1));
	if (start == NULL)
		return (NULL);
	i = 0;
	while (i < words && *str != '\0')
	{
		if (*str != ' ')
		{
			j = 0;
			while (str[j] != ' ')
				j++;
			start[i] = malloc(sizeof(char) * (j + 1));
			if (start[i] == NULL)
			{
				while (--i >= 0)
					free(start[--i]);
				free(start);
				return (NULL);
			}
			k = 0;
			while (k < j)
			{
				start[i][k] = *str;
				k++, str++;
			}
			start[i][k] = '\0';
			i++;
		}
		str++;
	}
	start[i] = '\0';
	return (start);
}

/**
 * count_words - a func to count the num of words recursively
 * @str: an input pointer to char
 * @i: current index
 * Return: number of words
 **/
int count_words(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + count_words(str, i + 1));
	return (count_words(str, i + 1));
}
/**
 * word_counter - a func that counts number of words in 1D array of strings
 * @str: an input pointer to char
 * Return: number of words
 **/
int word_counter(char *str)
{
	if (str[0] != ' ')
		return (1 + count_words(str, 0));
	return (count_words(str, 0));
}
