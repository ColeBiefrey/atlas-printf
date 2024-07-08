#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...) {
    va_list args;
    int count = 0, c, *str, d;
    const char *p, *s;

    va_start(args, format);
	str = malloc(sizeof(char) * 1024);
    for (p = format; *p != '\0'; p++) {
        if (*p == '%') {
            p++;
            if (*p == 'c') {
                c = va_arg(args, int);
                _putchar(c);
                count++;
            } else if (*p == 's') {
                s = va_arg(args, const char *);
                while (*s != '\0') {
                    _putchar(*s);
                    s++;
                    count++;
                }
			} else if (*p == 'd') {
				d = va_arg(args, int);
				_putchar(d);
				count++;
            } else if (*p == '%') {
                _putchar('%');
                count++;
            } else {
                _putchar('%');
                _putchar(*p);
                count += 2;
            
			}
        } else {
            _putchar(*p);
            count++;
        }
    }
    va_end(args);
	free(str);
    return (count);
}
