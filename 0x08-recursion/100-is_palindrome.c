#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);
/**
 * find_strlen - print String.
 * @s: num raised.
 * Return: l of string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - print String.
 * @s: num raised.
 * @len: s length
 * @index: the index of string.
 * Return: l of string
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
	{
		return (1);
	}

	if (s[index] == s[len - index - 1])
	{
		return (check_palindrome(s, len, index + 1));
	}

	return (0);
}

/**
 * is_palindrome - print String.
 * @s: num raised.
 * Return: l of string
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
	{
		return (1);
	}

	return (check_palindrome(s, len, index));
}
