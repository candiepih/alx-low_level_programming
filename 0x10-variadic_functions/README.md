# C - Variadic functions
Topic aim was to understanad what are variadic functions, how to use va_start, va_arg and va_end macros and why and how to use the const type qualifier
Following task files helped in understanding the topic.
## 0-sum_them_all.c
Function that returns the sum of all its parameters
* Prototype: `int sum_them_all(const unsigned int n, ...)`;
* If` n == 0`, returns `0`

## 1-print_numbers.c
Function that prints strings
* Prototype: `void print_strings(const char *separator, const unsigned int n, ...)`;
* where `separator` is the string to be printed between the strings and `n` is the number of strings passed to the function
* Allowed to use printf
* If `separator` is `NULL`, don’t print it
* If one of the `string` is `NULL`, print `(nil)` instead
* Print a new line at the end of function

## 3-print_all.c
Function that prints anything

* Prototype: void print_all(const char * const format, ...);
* where format is a list of types of arguments passed to the function
    * `c`: `char`
    * ``i: `integer`
    * `f`: `float`
    * `s`: `char *` (if the string is `NULL`, print `(nil)` instead any other char is ignored)
* Not allowed to use `for`, `goto`, `ternary operator`, `else`, `do ... while`
* Use a maximum of
    * 2 `while loops`
    * 2 `if`
* Declare a maximum of `9` variables
* Allowed to use printf
* Print a new line at the end of function
