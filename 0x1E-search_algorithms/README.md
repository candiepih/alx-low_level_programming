# Search Algorithms

This topic's aim was to understand:-

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on needs

# FILES

Below task files are used to test understanding on various concepts

[0-linear.c](./0-linear.c)

Function that searches for a value in an array of integers using the Linear search algorithm

* Prototype : `int linear_search(int *array, size_t size, int value);`
* Returns `-1` if value is not present in array or if array is `NULL` else index where value is located

[1-binary.c](./1-binary.c)

Function that searches for a value in a sorted array of integers using the Binary search algorithm

* Prototype : `int binary_search(int *array, size_t size, int value);`
* Returns `-1` if value is not present in array or if array is `NULL` else index where value is located

[2-O](./2-O)

Contains `time complexity` (worst case) of a linear search in an array of size `n`?

[3-O](./3-O)

Contains `space complexity` (worst case) of an iterative linear search algorithm in an array of size n?

[4-O](./4-O)

Contains `time complexity` (worst case) of a binary search in an array of size `n`?

[5-O](./5-O)

Contains `space complexity` (worst case) of a binary search in an array of size `n`?

[6-O](./6-O)

Contains `space complexity` of this function / algorithm?

```.c

int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}

```
