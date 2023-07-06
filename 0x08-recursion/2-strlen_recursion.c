#include <stdio.h>
/**
* _strlen_recursion - Returns the length of a string using recursion
* @s: Pointer to the string
* Return: Length of the string
*/
int _strlen_recursion(char *s)
{
/* Base case: If the current character is the null character,return 0 */
if (*s == '\0')
return (0);
/*
* Recursive call: Move to the next character and call itself recursively
* then add 1 to the result
*/
return (1 + _strlen_recursion(s + 1));
}
