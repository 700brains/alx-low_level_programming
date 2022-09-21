#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of the 
 * first unmatched characters.
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference
 * of the first unmatched characters.
 */
/*
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
*/
/*int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}*/

int _strcmp(char *s1, char *s2)
{
        // while neither strings have ended
        while (*s1 != '\0' || *s2 != '\0')
        {
		// if element in arr1 in arr2 are diff, return difference
                if (*s1 != *s2)
                        return (*s1 - *s2);
		// iterate index
                s1++;
                s2++;
        }
        return (0);
}
