# Bit manipulation
Topic was aimed at learning how to manipulate bits and use bitwise operators. The following task files helped in grasping the concept
## 0-binary_to_uint.c
Function that converts a binary number to an unsigned int.
* Prototype: `unsigned int binary_to_uint(const char *b)`;
* where `b` is pointing to a string of `0` and `1` chars
* Return: the converted number, or 0 if
      * there is one or more chars in the string `b` that is not `0` or `1`
      * `b` is `NULL`
## 1-print_binary.c
Function that prints the binary representation of a number.
* Prototype: `void print_binary(unsigned long int n)`;
* Not allowed to use arrays
* Not allowed to use `malloc`
* Not allowed to use the `%` or `/` operators

## 2-get_bit.c
Function that returns the value of a bit at a given index.
## 3-set_bit.c
Function that sets the value of a bit to 1 at a given index.
## 4-clear_bit.c
Function that sets the value of a bit to 0 at a given index.
## 5-flip_bits.c
Function that returns the number of bits you would need to flip to get from one number to another.
* Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m)`;
* Not allowed to use the `%` or `/` operators

## holberton.h
Contains all the function declarations and prototypes
## _putchar.c
Contains function defination of the _putchar function to be used in place of putchar standard library function
