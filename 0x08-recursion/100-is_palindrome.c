#include "main.h"

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 *         An empty string is considered a palindrome.
 */
int is_palindrome(char *s)
{
    int len = 0;

    if (*s == '\0')
        return 1;

    while (s[len] != '\0')
        len++;

    return check_palindrome(s, 0, len - 1);
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: The input string.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;

    return check_palindrome(s, start + 1, end - 1);
}
