# 0x0C. C - More malloc, free

## Description
What you should learn from this project:

* How to use the exit function
* What are the functions calloc and realloc from the standard library and how to use them

---

### [0. malloc_checked](./0-malloc_checked.c)
* Write a function that allocates memory using malloc.


### [1. string_nconcat](./1-string_nconcat.c)
* Write a function that concatenates two strings.
  * The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
  * If the function fails, it should return NULL
  * If n is greater or equal to the length of s2 then use the entire string s2
  * if NULL is passed, treat it as an empty string


### [2. calloc](./2-calloc.c)
* Write a function that allocates memory for an array, using malloc.
  * The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
  * The memory is set to zero
  * If nmemb or size is 0, then _calloc returns NULL
  * If malloc fails, then _calloc returns NULL


### [3. array_range](./3-array_range.c)
* Write a function that creates an array of integers.
  * The array created should contain all the values from min (included) to max (included), ordered from min to max
  * Return: the pointer to the newly created array
  * If min > max, return NULL
  * If malloc fails, return NULL


### [4. realloc](./100-realloc.c)
* Write a function that reallocates a memory block using malloc and free
  * where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
  * The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
  * If new_size > old_size, the added memory should not be initialized
  * If new_size == old_size do not do anything and return ptr
  * If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
  * If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL


### 5. mul (101-mul.c, not pushed)

---

## Author
* **Samuel Pomeroy** - [allelomorph](github.com/allelomorph)