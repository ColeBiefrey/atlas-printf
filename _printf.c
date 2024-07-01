#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...) {
    va_list args;
    int count = 0;
    const char *p;

    va_start(args, format);
    for (p = format; *p != '\0'; p++) {
        if (*p == '%') {
            p++;
            if (*p == 'c') {
                int c = va_arg(args, int);
                _putchar(c);
                count++;
            } else if (*p == 's') {
                const char *s = va_arg(args, const char *);
                while (*s != '\0') {
                    _putchar(*s);
                    s++;
                    count++;
                }
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
    return count;
}