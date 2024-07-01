#include "print.h"
#include <stdio.h>
#include <stdlib.h>

int print_str(char *s, int *count)
{
    int i;
    if (s == NULL)
    {
        s = "(null)";
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        _putchar(s[i]);
        count++;
    }
    return (0);
}

