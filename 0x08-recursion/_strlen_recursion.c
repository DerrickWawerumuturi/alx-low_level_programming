/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: The string for which to find the length
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0; // Base case: When we reach the end of the string

    return 1 + _strlen_recursion(s + 1); // Recursive case: Move to the next character
}

