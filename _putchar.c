#include <stdio.h>

int _printf(char c)
{
    return (write(1, &c, 1));
}