#include "main.h"

int _printf(const char *format, ...)
{
    if (!format)
        return -1;

    va_list arguments;
    va_start(arguments, format);

    char *buffer = malloc(sizeof(char) * 1024);
    if (!buffer)
        return -1;

    unsigned int len = 0, ibuf = 0;
    int (*function)(va_list, char*, unsigned int);

    for (unsigned int i = 0; format[i]; ++i)
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == '\0')
            {
                free(buffer);
                va_end(arguments);
                return -1;
            }
            function = get_print_func(format, i + 1);
            if (function == NULL)
            {
                if (format[i + 1] == ' ')
                    return -1;
                handl_buf(buffer, format[i], ibuf);
                ++len;
            }
            else
            {
                len += function(arguments, buffer, ibuf);
                i += ev_print_func(format, i + 1);
            }
            ++i;
        }
        else
        {
            handl_buf(buffer, format[i], ibuf);
            ++len;
        }
        for (ibuf = len; ibuf > 1024; ibuf -= 1024);
    }
    print_buf(buffer, ibuf);
    free(buffer);
    va_end(arguments);
    return len;
}
