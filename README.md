## The printf Project!

This custom printf is a collaberative assignment that is the combined work of
Deshaun Stout and Cole Kelsey

Our goal with this project is to create a copy of the basic printf command from scratch to
do some of its rudementary functions.

The command _printf that converts data in the string to a formatted output.
We used the following prototype:

int _printf(const char *format, ...);

The format is what contains the given string to be printed.
_printf is a variadic function so it is able to receive arguments 
to be replaced by tags given in the strings provided.

The format for the tags is:

%[flags][length]specifier

On a successful run, it will give a Return Value of the chars printed.


Examples:



-----

### _printf.c

This is our custom printf that formats output to print data.

-----

### main.h

This is our header file for all of our prototypes.

-----

### get_print_func.c

This is a pointer that selects the correct function for the given operation.

-----

### ev_print_func.c

This will return the amount of identifiers.

-----


### print_buf.

This will print out the buffer.

-----

### handl_buf.c

This will concatenate the characters from the buffer.

-----

### print_chr.c

This will write char C to stdout.

-----

### print_str.c

This will write string to stdout.

-----

### print_int.c

This will print an int.

-----

### print_prg.c

This will handle % in the buffer for printing.

-----
