#ifndef HEADER_MAIN
#define HEADER_MAIN


typedef print_t;

int _printf(const char *format, ...);
int print_str(va_list args);
int print_chr(va_list args);
int print_int(va_list args);
int print_prg(va_list args);
int _putchar(char c);

#endif