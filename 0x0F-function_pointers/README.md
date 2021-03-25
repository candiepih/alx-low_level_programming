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
## 3-op_functions.c
Contains the following functions.
* `op_add`: returns the sum of `a` and `b`. Prototype: `int op_add(int a, int b)`;
* `op_sub`: returns the difference of `a` and `b`. Prototype: `int op_sub(int a, int b)`;
* `op_mul`: returns the product of `a` and `b`. Prototype: `int op_mul(int a, int b)`;
* `op_div`: returns the result of the division of `a` by `b`. Prototype: `int op_div(int a, int b)`;
* `op_mod`: returns the remainder of the division of `a` by `b`. Prototype: `int op_mod(int a, int b)`;
## 3-get_op_func.c
Contain the function that selects the correct function to perform the operation asked by the user.

* Prototype: `int (*get_op_func(char *s))(int, int)`;
* where `s` is the operator passed as argument to the program
* This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: `get_op_func("+")` should return a pointer to the function `op_add`
* Not allowed to use switch statements
* Not allowed to use for or do ... while loops
* Not allowed to use goto
* Not allowed to use else
* Not allowed to use more than one if statement in your code
* Not allowed to use more than one while loop in your code
* If `s` does not match any of the 5 expected operators `(+, -, *, /, %)`, return `NULL`
* Only allowed to declare these two variables in this function:

```c

op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

 ```
## 3-main.c
This file should contain your main

* Not allowed to code any other function than main in this file
* Not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod from the main function
* Use atoi to convert arguments to int
* Not allowed to use any kind of loop
* Allowed to use a maximum of 3 if statements

## function_pointers.h
contains function prototypes and declarations
