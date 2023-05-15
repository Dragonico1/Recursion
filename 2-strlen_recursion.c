#include "main.h"

int _strlen_recursion(char *s)
{
    if (*s == '\0')
    {
        return;
    } else
    {
        return (_strlen_recursion(s + 1) + 1);
    }
}