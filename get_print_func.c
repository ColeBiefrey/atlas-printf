#include "print.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int (*get_print_func(char *s))(va_list)
{
    int i;
    print_t print[] = {
        {"s", print_str},
        {"c", print_chr},
        {"i", print_int},
        {"d", print_int},
        {"%", print_prg},
        {NULL, NULL},
    };

    for (i = 0; print[i].t; i++)
    {
        if (*s == *(print[i].t))
        {
            return (print[i].f);
        }
    }
    return (NULL);
}