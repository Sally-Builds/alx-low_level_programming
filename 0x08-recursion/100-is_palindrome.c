#include "main.h"
int checker(char *s, int inc, int dec);
int is_palindrome(char *s);
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 *
 * Return: Always 0 or 1
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (checker(s, 0, len - 1));
}
/**
 * _strlen_recursion - return length of string
 * @s: string to count length
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * checker - checks if a string is palindrome
 * @s: string to check
 * @inc: incrementor variable
 * @dec: decrementor variable
 *
 * Return: Always 0 or 1
 */
int checker(char *s, int inc, int dec)
{
	if (*(s + inc) != *(s + dec))
		return (0);
	if (inc > dec && *(s + inc) == *(s + dec))
		return (1);
	return (checker(s, ++inc, --dec));
}
