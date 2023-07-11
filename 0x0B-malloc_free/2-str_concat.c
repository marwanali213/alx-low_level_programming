#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *              if NULL is passed, treat it as an empty string
 *              The function should return NULL on failure
 *
 * @s1: This is the output string
 * @s2: This is the input string
 *
 * Return: The returned pointer should point to a newly allocated space in
 *         memory which contains the contents of s1, followed by the contents 
 *         of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
		
{
		
	char *conct;
		
	int i, ci;
		

		
	if (s1 == NULL)
		
		s1 = "";
		
	if (s2 == NULL)
		
		s2 = "";
		

		
		i = ci = 0;
		
	while (s1[i] != '\0')
		
		i++;
		
	while (s2[ci] != '\0')
		
		ci++;
		
	conct = malloc(sizeof(char) * (i + ci + 1));
		

		
	if (conct == NULL)
		
		return (NULL);
		
	i = ci = 0;
		
	while (s1[i] != '\0')
		
	{
		
		conct[i] = s1[i];
		
		i++;
		
	}
		

		
	while (s2[ci] != '\0')
		
	{
		
		conct[i] = s2[ci];
		
		i++, ci++;
		
	}
		
	conct[i] = '\0';
		
	return (conct);
		
}

