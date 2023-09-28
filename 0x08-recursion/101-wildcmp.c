#include "main.h"
/**
 * wildcmp - Compare the strings
 * @s1: strings 1
 * @s2: strings 2 (can contain *)
 * Return: 1 if identical and 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1 || wildcmp(s1 + 1, s2)));
	return (0);
}
