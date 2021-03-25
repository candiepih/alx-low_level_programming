# C - Function pointers
## 0-print_name.c
Function that prints a name.
## 1-array_iterator.c
Function that executes a function given as a parameter on each element of an array.
where `size` is the size of the array
and `action` is a pointer to the function you need to use
## 2-int_index.c
function that searches for an integer.
* where `size` is the number of elements in the array array
* `cmp` is a pointer to the function to be used to compare values
* `int_index` returns the index of the first element for which the cmp function does not return 0
* If no element matches, return -1
* If `size <= 0`, return -1
## 3-calc.h
This file should contain all the function prototypes and data structures used by the program, using this structure:
```c

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

```
